package connection;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class ConnectionFactory {
	
	public static Connection getConnection(String enderecoIP, String enderecoPorta, String nomeBanco, String usuarioBanco, String senhaBanco) throws SQLException {
		return DriverManager.getConnection("jdbc:postgresql://"+enderecoIP+":"+enderecoPorta+"/"+nomeBanco,usuarioBanco, senhaBanco);
	}
}
