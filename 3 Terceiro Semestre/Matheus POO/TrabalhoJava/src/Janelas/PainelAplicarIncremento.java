package Janelas;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

import Domain.Formulas;

@SuppressWarnings("serial")
class PainelAplicarIncremento extends JPanel implements ActionListener{
	
	private JTextField inputValorInicialIncremento, inputAcrescimo, resultadoIncremento;
	private JButton calcularIncremento;
	private JLabel valorInicial,acrescimo,resultado;
	
	PainelAplicarIncremento() {
		setLayout(new BorderLayout());
		setBorder(BorderFactory.createTitledBorder("Incrementar % a um valor"));
		setPreferredSize(new Dimension(350,200));
		
		add(BorderLayout.SOUTH,calcularIncremento = new JButton("Calcular"));
		calcularIncremento.addActionListener(this);
		
		JPanel containerCentral = new JPanel();
		containerCentral.setLayout(new FlowLayout(FlowLayout.RIGHT));
		
		add(BorderLayout.CENTER,containerCentral);
		
		JPanel containerL1 = new JPanel();
		containerL1.setLayout(new FlowLayout());
		
		JPanel containerL2 = new JPanel();
		containerL2.setLayout(new FlowLayout());
		
		JPanel containerL3 = new JPanel();
		containerL2.setLayout(new FlowLayout());
		
		containerCentral.add(containerL1);
		containerCentral.add(containerL2);
		containerCentral.add(containerL3);
		
		inputValorInicialIncremento = new JTextField();
		inputValorInicialIncremento.setPreferredSize(new Dimension(200,30));
		
		inputAcrescimo = new JTextField();
		inputAcrescimo.setPreferredSize(new Dimension(200,30));
		
		resultadoIncremento = new JTextField();
		resultadoIncremento.setPreferredSize(new Dimension(200,30));
		resultadoIncremento.setEditable(false);
		
		valorInicial = new JLabel("Valor inicial (R$):");
		valorInicial.setForeground(Color.RED);
		
		acrescimo = new JLabel("Acréscimo (%):");
		acrescimo.setForeground(Color.BLUE);
		
		resultado = new JLabel("Resultado (R$):");
		
		containerL1.add(valorInicial);
		containerL1.add(inputValorInicialIncremento);
		
		containerL2.add(acrescimo);
		containerL2.add(inputAcrescimo);
		
		containerL3.add(resultado);
		containerL3.add(resultadoIncremento);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		try {
			double valorInicial = Double.parseDouble(inputValorInicialIncremento.getText());
			double valorAcrescimo = Double.parseDouble(inputAcrescimo.getText());
			double resultado = Formulas.incrementar(valorInicial, valorAcrescimo);
			
			resultadoIncremento.setText(Double.toString(resultado));
		}catch(Exception erro) {
			inputValorInicialIncremento.setText("");
			inputAcrescimo.setText("");
			resultadoIncremento.setText("");
			JOptionPane.showMessageDialog(null, "Valor inválido. Tente novamente","Erro",JOptionPane.ERROR_MESSAGE);
		}
	}
}
