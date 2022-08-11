package banco;

import exceptionsBanco.ContaNaoExistente;
import exceptionsBanco.ClienteNaoExistente;
import exceptionsBanco.SaldoInsuficiente;
import exceptionsBanco.ClienteJaCadastrado;
import exceptionsBanco.ContaJaCadastrada;
public class Main {
	public static void main(String[] agrs) throws ContaNaoExistente, ClienteNaoExistente, SaldoInsuficiente, ClienteJaCadastrado, ContaJaCadastrada{
		try {
			Banco banco = new Banco();
			banco.cadastrarCliente(1);
			banco.criarConta(1, 50);
			banco.cadastrarCliente(2);
			banco.criarConta(2, 1);
			banco.depositar(1, 50, 1000);
			banco.transferir(1, 50, 2, 1, 200);
			banco.sacar(1, 50, 200);
			System.out.println(banco.getSaldo(1, 50));
			System.out.println(banco.getSaldo(2, 1));
		}
		catch(ContaNaoExistente e) {
			System.out.println(e.getMessage());
		}
		catch(ClienteNaoExistente e) {
			System.out.println(e.getMessage());
		}
		catch(SaldoInsuficiente e) {
			System.out.println(e.getMessage());
		}
		catch(ClienteJaCadastrado e) {
			System.out.println(e.getMessage());
		}
		catch(ContaJaCadastrada e) {
			System.out.println(e.getMessage());
		}
	}
}
