#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 
 Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus*/

int main ()
{

float ang1, ang2, ang3;
    //Entrada de dados
    printf("Digite o Primeiro ângulo: ");
	scanf("%f%*c", &ang1);

	printf("\nDigite o Segundo ângulo: ");
	scanf("%f%*c", &ang2);
    //Processamento
	
    ang3 = 180 - (ang1 + ang2);
	//Saida de dados
    printf("\nO Terceiro ângulo e: %.1f graus. \n\n", ang3);


    return 0;
}