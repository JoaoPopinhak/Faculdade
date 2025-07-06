package br.com.xti.logica;
import java.util.Scanner;

public class TrabalhoMath {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Digite a quantidade de cachorros que deseja calcular a porção ideal!");
		int lim = scanner.nextInt();
		double qtddiaria = 0;
		
		for(int i=1;i<=lim;i++) {
			
			System.out.println("Digite o peso do cão em KG (Kilo grama)");
			double peso = scanner.nextDouble();	
			
			if(peso <= 3.00){
				
				double qtdracaoideal = 0.07 * peso;
				System.out.printf("Porte Miniatura I\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
				
			}else if(peso >= 3.00 && peso <= 5.00){
				
				double qtdracaoideal = 0.06 * peso;
				System.out.printf("Porte Miniatura II\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
			}else if(peso >= 5.00 && peso <= 10.00){
				
				double qtdracaoideal = 0.05 * peso;
				System.out.printf("Porte Pequeno\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
			}else if(peso >= 10.00 && peso <= 22.00){
				
				double qtdracaoideal = 0.05 * peso;
				System.out.printf("Porte Médio\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
			}else if(peso >= 22.00 && peso <= 40.00){
				
				double qtdracaoideal = 0.045 * peso;
				System.out.printf("Porte Grande\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
			}else if(peso > 40.00){
				
				double qtdracaoideal = 0.04 * peso;
				System.out.printf("Porte Gigante\nA quantidade de ração ideal para o seu cão por dia é: %.3f KG\n", qtdracaoideal);
				qtddiaria = qtddiaria + qtdracaoideal;
				
			}else{
				
				System.out.printf("Peso inválido\n");
				
			}
		}
		
		System.out.printf("A quantidade de ração consumida diariamente é: %.3f KG\n", qtddiaria);
		
		System.out.println("Digite o valor monetário disponível para compra de ração");
		double valordin = scanner.nextDouble();
		
		System.out.println("Digite o valor de custo do KG da ração");
		double precokg = scanner.nextDouble();
		
		double totalracao = valordin / precokg;
		
		double dias = totalracao / qtddiaria;
		double diasi = (int)dias;
		double horas = (dias - diasi)*24;
		double horasi = (int)horas;
		double minutos = (horas - horasi)*60;
		
		System.out.printf("Total de ração disponível: %.3f KG\n", totalracao);
		System.out.printf("Você tem %.0f dias %.0f horas e %.0f minutos de ração disponível", diasi, horasi, minutos);
		
		scanner.close();
	}
}