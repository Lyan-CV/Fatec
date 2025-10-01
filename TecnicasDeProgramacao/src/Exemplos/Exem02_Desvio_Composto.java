package Exemplos;

import java.util.Scanner;

public class Exem02_Desvio_Composto {
	public static void main(String[] args) {
		int n1, n2;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Digite um número: ");
		n1 = scan.nextInt();
		
		System.out.println("Digite um segundo número: ");
		n2 = scan.nextInt();
		
		
		
		if((n1+n2) >10) {
			System.out.println("Resultado: "+(n1+n2));
		}else {
			System.out.println("A Soma dos dois números não é maior que 10");
		}
		
		scan.close();
		
	}
}
