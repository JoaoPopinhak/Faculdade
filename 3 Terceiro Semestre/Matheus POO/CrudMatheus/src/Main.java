import java.sql.Connection;
import java.sql.SQLException;

import connection.ConnectionFactory;
import database.dao.ClienteDAO;
import database.model.Cliente;

public class Main {
	public static void main(String[] args) throws SQLException {
		Connection conexao = ConnectionFactory.getConnection("localhost", "5432", "sistema", "postgres", "lab008r2");

		if(conexao != null) {
			System.out.println("Deu certo");
			
			Cliente cliente = new Cliente();
			cliente.setNome("Joao");
			cliente.setCpf("123");
			
			
			ClienteDAO dao = new ClienteDAO(conexao);
			
			if(dao.inserir(cliente)) {
				System.out.println("Deu certo");
				
			}else {
				System.out.println("Deu erro");
				
			}
			
			}else {
				System.out.println("Deu erro");
			}
		
		
	}
}
