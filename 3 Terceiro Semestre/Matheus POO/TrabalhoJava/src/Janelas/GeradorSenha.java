package Janelas;

import java.awt.BorderLayout;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JCheckBox;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JSpinner;
import javax.swing.JTextField;
import javax.swing.SpinnerNumberModel;

import Domain.Formulas;

@SuppressWarnings("serial")
class GeradorSenha extends JPanel implements ActionListener{
	private JCheckBox maiusculasCheck,minusculasCheck,numerosCheck,simbolosCheck;
	private JSpinner tamanhoSeletor;
	private JTextField outResultado; 
	private JButton gerarSenhaButton;
	private boolean maiusculas,minusculas,numeros,simbolos;
	
	GeradorSenha() {
		setLayout(new BorderLayout());
		setBorder(BorderFactory.createTitledBorder("Gerador de senha"));
		setPreferredSize(new Dimension(350,200));
		
		JPanel containerCheckBox = new JPanel(new GridLayout(2,2));
		JPanel containerCentro = new JPanel(new FlowLayout(FlowLayout.LEADING,40,30));
		JPanel containerSaida = new JPanel(new FlowLayout());
		
		JPanel containerAuxiliarCentro = new JPanel(new FlowLayout());
		
		
		add(BorderLayout.NORTH, containerCheckBox);
		add(BorderLayout.CENTER, containerCentro);
		add(BorderLayout.SOUTH, containerSaida);
		
		containerCentro.add(containerAuxiliarCentro);
		
		
		maiusculasCheck = new JCheckBox("Maiúsculas");
		minusculasCheck = new JCheckBox("Minúsculas");
		numerosCheck = new JCheckBox("Números");
		simbolosCheck = new JCheckBox("Símbolos");
		
		tamanhoSeletor = new JSpinner(new SpinnerNumberModel(1,1,20,1));
		tamanhoSeletor.setPreferredSize(new Dimension(60, 25));
		
		gerarSenhaButton = new JButton("Gerar");
		gerarSenhaButton.setPreferredSize(new Dimension(80,25));
		gerarSenhaButton.addActionListener(this);
		
		outResultado = new JTextField();
		outResultado.setEditable(false);
		outResultado.setPreferredSize(new Dimension(300,25));
		
		containerCheckBox.add(maiusculasCheck);
		containerCheckBox.add(minusculasCheck);
		containerCheckBox.add(numerosCheck);
		containerCheckBox.add(simbolosCheck); 
		
		containerAuxiliarCentro.add(new JLabel("Tamanho"));
		containerAuxiliarCentro.add(tamanhoSeletor);
		containerCentro.add(gerarSenhaButton);

		containerSaida.add(outResultado);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		try {
			if(maiusculasCheck.isSelected()) {
				maiusculas = true;
			}
			if(minusculasCheck.isSelected()) {
				minusculas = true;
			}
			if(numerosCheck.isSelected()) {
				numeros = true;
			}
			if(simbolosCheck.isSelected()) {
				simbolos = true;
			}
			
			int tamanho = (int) tamanhoSeletor.getValue();
			
			String senha = Formulas.geradorSenha(tamanho, maiusculas, minusculas, numeros, simbolos);
			
			outResultado.setText(senha);
			
		}catch(Exception erro) {
			JOptionPane.showMessageDialog(null, erro.getMessage(),"Erro",JOptionPane.ERROR_MESSAGE);
		}finally {
			maiusculas = false;
			minusculas = false;
			numeros = false;
			simbolos = false;
		}
	}
}
