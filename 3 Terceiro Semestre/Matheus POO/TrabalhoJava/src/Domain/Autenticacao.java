package Domain;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class Autenticacao {
	
	private String usuario = "Adm";
	private String senha = "Adm";
	private static Path path = Paths.get(System.getProperty("user.dir"),"Documentos", "senha.txt");
	private static Charset utf8 = StandardCharsets.UTF_8;
	
	public Autenticacao() {}
	
	public boolean validarAutenticacao(String usuario, String senha, boolean lembrarSenha) {

		if(this.usuario.equals(usuario) && this.senha.equals(senha)) {
			
			gravarSenha(usuario,senha,lembrarSenha);

			return true;
		}
		return false;
	}
	
	private void gravarSenha(String usuarioDigitado, String senhaDigitada, boolean lembrarSenha) {
		try(BufferedWriter w1 = Files.newBufferedWriter(path, utf8)){
			w1.write(usuarioDigitado+";"+senhaDigitada+";"+lembrarSenha);
		} catch (Exception e){
			e.printStackTrace();
		}
	}
	
	public String[] lerSenhaUsuario() {
		try(BufferedReader r1 = Files.newBufferedReader(path, utf8)){
	
			String line = r1.readLine();
			
			if(line != null) {
				return line.split(";");
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
		return new String[0];
	}
}
