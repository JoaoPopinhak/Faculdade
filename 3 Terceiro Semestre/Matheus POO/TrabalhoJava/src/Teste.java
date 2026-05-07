import Domain.Formulas;

public class Teste {
	public static void main(String[] args) {
		System.out.println("Aplicar desconto         - resultado:" + Formulas.aplicarDesconto(50, 50));
		System.out.println("Aplicar incremento       - resultado:" + Formulas.incrementar(50, 50));
		System.out.println("Aplicar amostragem1      - resultado:" + Formulas.amostragem(50, 50));
		System.out.println("Aplicar amostragem2      - resultado:" + Formulas.amostragem2(50, 50));
		System.out.println("Aplicar qual o desconto? - resultado:" + Formulas.qualDesconto(100, 50));
		System.out.println("Aplicar variação delta   - resultado:" + Formulas.variacaoDelta(50, 100));
		System.out.println("Aplicar valor original   - resultado:" + Formulas.valorOriginal(50, 50));
		System.out.println("Aplicar regra de três    - resultado:" + Formulas.regraDeTres(5,12,20));
		System.out.println("Aplicar gerador de senha - resultado:" + Formulas.geradorSenha(10, true, true, true, true));
	}
}
