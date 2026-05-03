package Janelas;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Container;
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
class PainelAplicarDesconto extends JPanel implements ActionListener{
	
	private JTextField inputValorInicialDesconto,inputDesconto,resultadoAplicarDesconto;
	private JButton calcularAplicarDesconto;
	private JLabel valorInicial,desconto,resultado;
	
	PainelAplicarDesconto() {
		setLayout(new BorderLayout());
		setBorder(BorderFactory.createTitledBorder("Aplicar desconto % num valor"));
		setPreferredSize(new Dimension(350,200));
		add(BorderLayout.SOUTH,calcularAplicarDesconto = new JButton("Calcular"));
		calcularAplicarDesconto.addActionListener(this);
		
		Container containerCentral = new JPanel();
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
		
		inputValorInicialDesconto = new JTextField();
		inputValorInicialDesconto.setPreferredSize(new Dimension(200,30));
		
		inputDesconto = new JTextField();
		inputDesconto.setPreferredSize(new Dimension(200,30));
		
		resultadoAplicarDesconto = new JTextField();
		resultadoAplicarDesconto.setPreferredSize(new Dimension(200,30));
		resultadoAplicarDesconto.setEditable(false);
		
		valorInicial = new JLabel("Valor inicial (R$):");
		valorInicial.setForeground(Color.RED);
		valorInicial.setHorizontalAlignment(JLabel.RIGHT);
		
		desconto = new JLabel("Desconto (%):");
		desconto.setForeground(Color.BLUE);
		desconto.setHorizontalAlignment(JLabel.RIGHT);
		
		resultado = new JLabel("Resultado (R$):");
		resultado.setHorizontalAlignment(JLabel.RIGHT);
		
		containerL1.add(valorInicial);
		containerL1.add(inputValorInicialDesconto);
		
		containerL2.add(desconto);
		containerL2.add(inputDesconto);
		
		containerL3.add(resultado);
		containerL3.add(resultadoAplicarDesconto);

	}
	
	@Override
	public void actionPerformed(ActionEvent e) {
		try {
			double valorInicial = Double.parseDouble(inputValorInicialDesconto.getText().replace(",", "."));
			double desconto = Double.parseDouble(inputDesconto.getText().replace(",", "."));
			double resultado = Formulas.aplicarDesconto(valorInicial, desconto);
			
			resultadoAplicarDesconto.setText(Double.toString(resultado));
		}catch(Exception erros) {
			inputValorInicialDesconto.setText("");
			inputDesconto.setText("");
			resultadoAplicarDesconto.setText("");
			JOptionPane.showMessageDialog(null, "Valor inválido. Tente novamente","Erro",JOptionPane.ERROR_MESSAGE);
		}
	}
}
