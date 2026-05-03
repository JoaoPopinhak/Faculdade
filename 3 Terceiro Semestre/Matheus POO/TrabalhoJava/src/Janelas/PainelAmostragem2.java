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
class PainelAmostragem2 extends JPanel implements ActionListener{
	
	private JLabel valorA, valorB, resultado;
	private JTextField inputA, inputB, outResultado;
	private JButton calcularButton;
	
	PainelAmostragem2() {	
		setLayout(new BorderLayout());
		setBorder(BorderFactory.createTitledBorder("Amostragem 2 - Quanto X representa de Y"));
		setPreferredSize(new Dimension(350,200));
		
		add(BorderLayout.SOUTH,calcularButton = new JButton("Calcular"));
		calcularButton.addActionListener(this);
		
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
		
		inputA = new JTextField();
		inputA.setPreferredSize(new Dimension(200,30));
		
		inputB = new JTextField();
		inputB.setPreferredSize(new Dimension(200,30));
		
		outResultado = new JTextField();
		outResultado.setPreferredSize(new Dimension(200,30));
		outResultado.setEditable(false);
		
		valorA = new JLabel("Total:");
		valorA.setForeground(Color.RED);
		
		valorB = new JLabel("Parte:");
		valorB.setForeground(Color.BLUE);
		
		resultado = new JLabel("Corresponde a(%):");
		
		containerL1.add(valorA);
		containerL1.add(inputA);
		
		containerL2.add(valorB);
		containerL2.add(inputB);
		
		containerL3.add(resultado);
		containerL3.add(outResultado);
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		try {
			double valorA = Double.parseDouble(inputA.getText());
			double valorB = Double.parseDouble(inputB.getText());
			double resultado = Formulas.amostragem2(valorA, valorB);
			
			outResultado.setText(Double.toString(resultado));
		}catch(Exception erro) {
			inputA.setText("");
			inputB.setText("");
			outResultado.setText("");
			JOptionPane.showMessageDialog(null, "Valor inválido. Tente novamente","Erro",JOptionPane.ERROR_MESSAGE);
		}
	}
}
