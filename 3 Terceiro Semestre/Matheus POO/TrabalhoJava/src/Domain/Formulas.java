package Domain;
import java.security.SecureRandom;

public class Formulas {
	
	private Formulas(){}
	
	public static double aplicarDesconto(double valorInicial, double percentualDesconto) {
		
		double resultado = valorInicial - (valorInicial * (percentualDesconto / 100));
	
		return resultado;
	}
	
	
	public static double incrementar(double valorInicial, double percentualAcrescimo) {
		
		double resultado = valorInicial + (valorInicial * (percentualAcrescimo / 100));
		
		return resultado;
	}
	
	public static double amostragem(double total, double percentual) {
		
		double resultado = (total * percentual) / 100;
		
		return resultado;
	}
	
	public static double amostragem2 (double valorTotal, double parte) {
		
		double resultado = (parte / valorTotal) * 100;
		
		return resultado;
	}
		
	public static double qualDesconto(double valorOriginal, double valorDesconto) {
		
		double resultado = ((valorOriginal - valorDesconto) / valorOriginal) * 100;
		
		return resultado;
	}
	
	public static double variacaoDelta(double valorInicial, double valorFinal) {
		
		double resultado = ((valorFinal - valorInicial)/valorInicial) * 100;
		
		return resultado;
	}
	
	public static double valorOriginal(double valorFinal, double desconto) {
		
		double resultado = (valorFinal * 100 / (100 - desconto));
		
		return resultado;
	}
	
	public static double regraDeTres(double a, double b, double r1) {
		
		double resultado = (r1 * b) / a;

		return resultado;
	}
	
	public static String geradorSenha(int tamanho, boolean maiuscula, boolean minuscula, boolean numeros, boolean simbolos) {
		
		String MAIUSCULAS = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String MINUSCULAS = "abcdefghijklmnopqrstuvwxyz";
		String NUMEROS = "0123456789";
		String SIMBOLOS = "!@#$%&*()-_=+<>?";
		
		SecureRandom random = new SecureRandom();
		
		StringBuilder caracteres = new StringBuilder();
		StringBuilder senha = new StringBuilder();
			
		if(maiuscula) {
			caracteres.append(MAIUSCULAS);
			senha.append(MAIUSCULAS.charAt(random.nextInt(MAIUSCULAS.length())));
		}
		
		if(minuscula) {
			caracteres.append(MINUSCULAS);
			senha.append(MINUSCULAS.charAt(random.nextInt(MINUSCULAS.length())));
		}
		
		if(numeros) {
			caracteres.append(NUMEROS);
			 senha.append(NUMEROS.charAt(random.nextInt(NUMEROS.length())));
		}
		
		if(simbolos) {
			caracteres.append(SIMBOLOS);
			senha.append(SIMBOLOS.charAt(random.nextInt(SIMBOLOS.length())));
		}
		
		if(caracteres.length() == 0) {
			throw new IllegalArgumentException("Selecione ao menos uma opção");
		}
		
		while (senha.length() < tamanho) {
	        int index = random.nextInt(caracteres.length());
	        senha.append(caracteres.charAt(index));
	    }
		return senha.toString();
	}
}
