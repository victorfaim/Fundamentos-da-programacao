#include <stdlib.h>
#include <stdio.h>
#include <math.h> //necessária para usar as funções matemáticas como "pow" usado em exercicio

 
 /*Faça um programa que receba o raio, calcule e mostre:
    a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
    b) a área de uma esfera; sabe-se que A = p R2
    c) o volume de uma esfera; sabe-se que V = ¾ * p R3. */

int main()
{
	float pi;
    float raio, comprimento, area, volume;

    printf ("Digite o valor do raio da esfera: ");
	scanf("%f%*c", &raio); // atribui valor a varial raio digitada pelo usuario

    pi= 3,14159; // atribuindo de pi na variavel pi.
	comprimento = pi * 2 * raio;

	// A fórmula para calcular a área de uma esfera é 4 * pi * raio² mas no exercício está pi * raio²(Entao seguimos de acordo com o enunciado proposto)
	area = pi * pow(raio, 2); // usa-se pow para potenciação (recomenda-se uso da biblioteca <math.h>)
	
	// A fórmula de volume de esfera é 4 / 3 *pi * raio³ mas no exercício está 3 / 4 *pi * raio³ (Entao seguimos de acordo com o enunciado proposto)
	volume = 3.0 / 4.0 * pi * pow(raio, 3); //usa-se pow para potenciação (recomenda-se uso da biblioteca <math.h>)
	
    //Aqui estao as impressoes do que foi pedido em exercicio 
	printf("\nComprimento: %.2f ", comprimento);
	printf("\nArea: %.2f ", area); 
	printf("\nVolume: %.2f \n", volume);


	return 0;
}