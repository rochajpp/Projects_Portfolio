package banco;
import java.util.HashMap;
import java.util.Map;
import exceptionsBanco.ClienteJaCadastrado;
import exceptionsBanco.ContaJaCadastrada;
import exceptionsBanco.ClienteNaoExistente;
import exceptionsBanco.ContaNaoExistente;
import exceptionsBanco.SaldoInsuficiente;
public class Banco{
	Map<Integer, Cliente> clientes = new HashMap<Integer, Cliente>();
	public void cadastrarCliente(Integer chave) throws ClienteJaCadastrado {
		if(clientes.containsKey(chave)) {
			throw new ClienteJaCadastrado();
		}else {
			Cliente clienteNovo = new Cliente();
			clientes.put(chave, clienteNovo);
			System.out.println("Cliente cadastrado com sucesso!");
		}
	}
	public void removerCliente(int identificador) throws ClienteNaoExistente {
		if(clientes.containsKey(identificador)) {
			clientes.remove(identificador);
			System.out.println("Cliente removido com sucessor!");
		}else {
			throw new ClienteNaoExistente("Cliente nao existente");
		}
	}
	public void criarConta(int identificador, int identificadorConta) throws ClienteNaoExistente, ContaJaCadastrada{
		if(clientes.containsKey(identificador)) {
			if(clientes.get(identificador).contas.containsKey(identificadorConta)) {
				throw new ContaJaCadastrada();
			}else {
				Conta contaNova = new Conta();
				clientes.get(identificador).contas.put(identificadorConta, contaNova);
				System.out.println("Conta criada com sucesso!");
			}
		}else {
			throw new ClienteNaoExistente("Cliente nao existente!");
		}  
	}
	public void transferir(int  idEmissor, int contaEmissor, int idRemetente, int contaRemetente, double valor) throws ContaNaoExistente, ClienteNaoExistente, SaldoInsuficiente  {
		if(!clientes.containsKey(idEmissor)) {
			throw new ClienteNaoExistente("Cliente emissor nao existente");
		}else if(!clientes.containsKey(idRemetente)) {
			throw new ClienteNaoExistente("Cliente remetente nao existente!");
		}else if(!clientes.get(idEmissor).contas.containsKey(contaEmissor)) {
			throw new ContaNaoExistente("Conta do emissor nao existente!");
		}else if(!clientes.get(idRemetente).contas.containsKey(contaRemetente)) {
			throw new ContaNaoExistente("Conta do remetente nao existente!");
		}else if(getSaldo(idEmissor, contaEmissor) < valor) {
			throw new SaldoInsuficiente();
		}else {
			setSaldo(idEmissor, contaEmissor, getSaldo(idEmissor, contaEmissor) - valor);
			setSaldo(idRemetente, contaRemetente, getSaldo(idRemetente, contaRemetente) + valor);
			System.out.println("Transferencia realizada com sucesso!");
		}
	}
	public void depositar(int idCliente, int idConta, double valor) throws ClienteNaoExistente, ContaNaoExistente {
		if(!clientes.containsKey(idCliente)) {
			throw new ClienteNaoExistente("Cliente nao existente!");
		}else if(!clientes.get(idCliente).contas.containsKey(idConta)) {
			throw new ContaNaoExistente("Conta nao existente!");
		}else {
			setSaldo(idCliente, idConta, getSaldo(idCliente, idConta) + valor);
			System.out.println("Deposito realizado com sucesso!");
		}
	}
	public void sacar(int idCliente, int idConta, double valor) throws ContaNaoExistente, ClienteNaoExistente, SaldoInsuficiente {
		if(!clientes.containsKey(idCliente)) {
			throw new ClienteNaoExistente("Cliente nao existente!");
		}else if(!clientes.get(idCliente).contas.containsKey(idConta)) {
			throw new ContaNaoExistente("Conta nao existente!");
		}else if(clientes.get(idCliente).getSaldo(idConta) < valor) {
			throw new SaldoInsuficiente();
		}
		else {
			setSaldo(idCliente, idConta, getSaldo(idCliente, idConta) - valor);
			System.out.println("Saque realizado com sucesso!");
		}
	}
	public Cliente getClientes(int id) {
		return this.clientes.get(id);
	}
	public double getSaldo(int idCliente, int idConta) {
		return clientes.get(idCliente).getSaldo(idConta);
	}
	public void setSaldo(int idCliente, int idConta, double valor) {
		clientes.get(idCliente).setSaldo(idConta, valor);
	}
}