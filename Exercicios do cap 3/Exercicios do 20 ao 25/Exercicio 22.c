#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número de diagonais desse polígono, onde N é o número de lados do polígono.
 * Sabe-se que ND = N(N -3) /2 */

int main ()
{
        int lados, diagonais;
//Entrada de dados
    
    printf ("Digite o numero de lados do poligono: ");
	scanf("%d%*c", &lados);
//Processamento
	
    diagonais = lados * (lados - 3)/2;
//Saida de dados
	
    printf("\nNº de diagonais: %d\n\n", diagonais);

	

    return 0;

}