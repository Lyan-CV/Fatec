package Exemplos;

import java.util.Scanner;

public class Exe03_Desvio_Composto {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n1;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Digite um número: ");
		n1 = scan.nextInt();
		
		
		
		
		if(n1>0) {
			System.out.println("valor positivo");
		}else if(n1 <0) {
			System.out.println("Valor negativo");
		}else {
			System.out.println("Valor neutro");
		}
		
		scan.close();

	}

}
