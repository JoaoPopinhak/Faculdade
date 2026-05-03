package Janelas;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.GridBagLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

import Domain.Autenticacao;

@SuppressWarnings("serial")
public class JanelaLogin extends JFrame implements ActionListener{
	
	private JLabel usuarioLabel, senhaLabel, erroLabel;
	private JTextField usuarioText;
	private JPasswordField senhaPass;
	private JButton entrarButton;
	private JCheckBox lembrarSenhaCheck;
	private Autenticacao autenticacao = new Autenticacao();
	
	public JanelaLogin() {
	    super("Login");
	    setLayout(new BorderLayout());

	    JPanel containerPrincipal = new JPanel();
	    containerPrincipal.setLayout(new BoxLayout(containerPrincipal, BoxLayout.Y_AXIS));
	    containerPrincipal.setBorder(BorderFactory.createEmptyBorder(20, 30, 20, 30));

	    JPanel containerUsuario = new JPanel(new FlowLayout(FlowLayout.CENTER));
	    JPanel containerSenha = new JPanel(new FlowLayout(FlowLayout.CENTER));
	    JPanel containerBotaoEntrar = new JPanel(new FlowLayout(FlowLayout.CENTER));
	    JPanel containerLembrarSenha = new JPanel(new FlowLayout(FlowLayout.CENTER));
	    JPanel containerErroSenha = new JPanel(new FlowLayout(FlowLayout.CENTER));

	    usuarioLabel = new JLabel("Usuário:");
	    
	    usuarioText = new JTextField();
	    usuarioText.setPreferredSize(new Dimension(150, 25));

	    senhaLabel = new JLabel("Senha:  ");
	    
	    senhaPass = new JPasswordField();
	    senhaPass.setPreferredSize(new Dimension(150, 25));

	    entrarButton = new JButton("Entrar");
	    entrarButton.setPreferredSize(new Dimension(100, 25));
	    entrarButton.addActionListener(this);
	    
	    lembrarSenhaCheck = new JCheckBox("Lembrar senha");
	    
	    boolean lembrar = validarLembrarSenha();
	    lembrarSenhaCheck.setSelected(lembrar);

	    if (lembrar) {
	        String[] usuarioSenha = autenticacao.lerSenhaUsuario();

	        if (usuarioSenha != null && usuarioSenha.length > 1) {
	            usuarioText.setText(usuarioSenha[0]);
	            senhaPass.setText(usuarioSenha[1]);
	        }
	    }
	    
	    erroLabel = new JLabel("Senha ou usuário incorreto. Tente novamente");
	    erroLabel.setForeground(Color.RED);
	    erroLabel.setVisible(false);
	    

	    containerUsuario.add(usuarioLabel);
	    containerUsuario.add(usuarioText);

	    containerSenha.add(senhaLabel);
	    containerSenha.add(senhaPass);

	    containerBotaoEntrar.add(entrarButton);
	    
	    containerLembrarSenha.add(lembrarSenhaCheck);
	    
	    containerErroSenha.add(erroLabel);

	    containerPrincipal.add(containerUsuario);
	    containerPrincipal.add(Box.createVerticalStrut(10));
	    
	    containerPrincipal.add(containerSenha);
	    containerPrincipal.add(Box.createVerticalStrut(10));
	    
	    containerPrincipal.add(containerBotaoEntrar);
	    
	    containerPrincipal.add(containerLembrarSenha);
	    
	    containerPrincipal.add(containerErroSenha);

	    JPanel wrapper = new JPanel(new GridBagLayout());
	    wrapper.add(containerPrincipal);

	    add(wrapper, BorderLayout.CENTER);

	    setSize(450, 350);
	    setLocationRelativeTo(null);
	    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	    setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		
		
		String usuarioDigitado = usuarioText.getText();
		String senhaDigitada = new String(senhaPass.getPassword());
		boolean lembrarSenha = lembrarSenhaCheck.isSelected();
		
		boolean validacaoCheck  = autenticacao.validarAutenticacao(usuarioDigitado, senhaDigitada, lembrarSenha);
		
		if(validacaoCheck) {
			new JanelaPrincipal();
			dispose();
		}else {
			erroLabel.setVisible(true);
		    usuarioText.setText("");
		    senhaPass.setText("");
		    usuarioText.requestFocus();
		}
	}
	
	private boolean validarLembrarSenha() {	
		boolean lembrarSenhaCheck;
		
		String[] tokensLembrarSenha = autenticacao.lerSenhaUsuario();
		
		if (tokensLembrarSenha != null && tokensLembrarSenha.length > 2) {
		    lembrarSenhaCheck = Boolean.parseBoolean(tokensLembrarSenha[2]);
		} else {
		    lembrarSenhaCheck = false;
		}

		return lembrarSenhaCheck;
	}
}
