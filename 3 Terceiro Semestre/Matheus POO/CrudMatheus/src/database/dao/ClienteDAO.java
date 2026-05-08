package database.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import database.model.Cliente;

public class ClienteDAO {
	
	private String insert = "INSERT INTO tb_clientes(nome,cpf) values (?,?)";
	private PreparedStatement pstInsert;
	
	public ClienteDAO(Connection conexao) throws SQLException {
		pstInsert = conexao.prepareStatement(insert);
	}
	
	public boolean inserir(Cliente cliente) throws SQLException {
		
		pstInsert.setString(1, cliente.getNome());
		pstInsert.setString(2, cliente.getCpf());
		pstInsert.execute();
		
		return pstInsert.getUpdateCount() > 0;
	}
}
