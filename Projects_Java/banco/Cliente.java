package banco;
import java.util.Map;
import java.util.HashMap;
public class Cliente{
	public Map <Integer, Conta> contas = new HashMap<Integer, Conta>();
	public double getSaldo(int id) {
		return contas.get(id).saldo;
	}
	public void setSaldo(int id, double valor) {
		contas.get(id).saldo = valor;
	}
}