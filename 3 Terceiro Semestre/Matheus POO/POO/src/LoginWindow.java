
import java.awt.Container;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

@SuppressWarnings("serial")
public class LoginWindow extends JFrame{
	
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	@SuppressWarnings("unused")
	private JButton btnEntrar;
	@SuppressWarnings("unused")
	private JTextField txtEmail;
	@SuppressWarnings("unused")
	private JPasswordField txtSenha;
	@SuppressWarnings("unused")
	private JLabel labelEmail;
	@SuppressWarnings("unused")
	private JLabel labelsenha;
	
	private void componentesCriar() {
		Container c = getContentPane();
	    c.setLayout(null); 
	    
	    labelEmail = new JLabel("Email:");
	    labelEmail.setBounds(20, 20, 50, 25); 
	    c.add(labelEmail);
	    
	    txtEmail = new JTextField();
	    txtEmail.setBounds(80, 20, 150, 25);
	    c.add(txtEmail);
	    
	    labelsenha = new JLabel("Senha:");
	    labelsenha.setBounds(20, 60, 50, 25);
	    c.add(labelsenha);
	    
	    txtSenha = new JPasswordField();
	    txtSenha.setBounds(80, 60, 150, 25);
	    c.add(txtSenha);
	    
	    btnEntrar = new JButton("Entrar");
	    btnEntrar.setBounds(100, 110, 80, 30); 
	    c.add(btnEntrar);
		
	}
	
	public LoginWindow() {
		componentesCriar();
		
		setSize(300,300);
		setTitle("Login");
		setVisible(true);
		setLayout(null);
		setResizable(false);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	
	public static void main(String[] args) {
		new LoginWindow();
	}
	
}
