package Janelas;
import java.awt.FlowLayout;

import javax.swing.JFrame;

@SuppressWarnings("serial")
class JanelaPrincipal extends JFrame{
	
	JanelaPrincipal() {
		super("Cálculos");
		setLayout(new FlowLayout(FlowLayout.LEADING));

        add(new PainelAplicarDesconto());
        add(new PainelAplicarIncremento());
        add(new PainelAmostragem1());
        add(new PainelAmostragem2());
        add(new PainelQualDesconto());
        add(new PainelVariacaoDelta());
        add(new PainelQualValorOriginal());
        add(new PainelRegraDeTres());
        add(new GeradorSenha());


        /**/
        setSize(1700, 1000); 
        setLocationRelativeTo(null); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
	}
}
 