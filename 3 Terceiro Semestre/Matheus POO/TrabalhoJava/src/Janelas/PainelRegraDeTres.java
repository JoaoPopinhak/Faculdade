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
class PainelRegraDeTres extends JPanel implements ActionListener{
	JLabel valorA, valorB, valorR1, valorR2;
	JTextField inputA, inputB, inputR1,outR2;
	JButton calcularButton;
	
	PainelRegraDeTres() {
		setLayout(new BorderLayout());
		setBorder(BorderFactory.createTitledBorder("Regra de três"));
		setPreferredSize(new Dimension(450,200));
		
		add(BorderLayout.SOUTH,calcularButton = new JButton("Calcular"));
		calcularButton.addActionListener(this);
		
		JPanel containerCentral = new JPanel();
		containerCentral.setLayout(new FlowLayout(FlowLayout.RIGHT));
		
		add(BorderLayout.CENTER, containerCentral);
		
		JPanel containerL1 = new JPanel();
		containerL1.setLayout(new FlowLayout());
		
		JPanel containerL2 = new JPanel();
		containerL2.setLayout(new FlowLayout());
		
		containerCentral.add(containerL1);
		containerCentral.add(containerL2);
		
		inputA = new JTextField();
		inputA.setPreferredSize(new Dimension(180,30));
		
		inputB = new JTextField();
		inputB.setPreferredSize(new Dimension(180,30));
		
		inputR1 = new JTextField();
		inputR1.setPreferredSize(new Dimension(180,30));
		
		outR2 = new JTextField();
		outR2.setPreferredSize(new Dimension(180,30));
		outR2.setEditable(false);
		
		valorA = new JLabel("A:");
		valorA.setForeground(Color.RED);
		
		valorB = new JLabel("B:");
		valorB.setForeground(Color.BLUE);
		
		valorR1 = new JLabel("R1:");
		valorR1.setForeground(Color.GREEN);
		
		valorR2 = new JLabel("R2:");
		
		containerL1.add(valorA);
		containerL1.add(inputA);
		containerL1.add(new JLabel("="));
		containerL1.add(valorR1);
		containerL1.add(inputR1);
		
		containerL2.add(valorB);
		containerL2.add(inputB);
		containerL2.add(new JLabel("="));
		containerL2.add(valorR2);
		containerL2.add(outR2);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		try {
			double valorA = Double.parseDouble(inputA.getText());
			double valorB = Double.parseDouble(inputB.getText());
			double valorR1 = Double.parseDouble(inputR1.getText());
			
			double resultado = Formulas.regraDeTres(valorA, valorB, valorR1);
			
			outR2.setText(Double.toString(resultado));
			
		}catch(Exception erro) {
			inputA.setText("");
			inputB.setText("");
			inputR1.setText("");
			outR2.setText("");
			JOptionPane.showMessageDialog(null, "Valor inválido. Tente novamente","Erro",JOptionPane.ERROR_MESSAGE);
		}
	}
}
