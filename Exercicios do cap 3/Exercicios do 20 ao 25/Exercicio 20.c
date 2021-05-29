#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca necessaria para operações matematicas como sqrt e pow (usados em exercicio)

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância que a escada está da parede.
 Calcule e mostre a medida da escada para que se possa alcançar a ponta da escada. */



int main ()
{
    
	
	float ang_base, ang_alt;
	float altura, base, hipo;

  //Entrada de dados
	printf("\nDigite a base do angulo: ");
	scanf("%f", &ang_base); 

	printf("Distância: ");
	scanf("%f", &base);
//Calculos
    hipo = base / cos(ang_base);
	if (hipo < 0) // verificando se a hipotenusa é um valor positivo
	{
		hipo = hipo * (-1);
	}

	altura = sqrt(pow(hipo, 2) - pow(base, 2)); // sqrt para raiz e pow para potencia (necessaria biblioteca <math.h>) (calculo da altura)
	ang_alt = 180 - (90 + ang_base);

//Saida dos dados
	printf("\nA medida da escada e %.2f \n", hipo);

	printf("A altura da escada e %.2f\n", altura);

	printf("Os tres angulos do triangulo sao: 90, %.2f e %.2f graus. \n\n", ang_base, ang_alt);




    return 0;
}