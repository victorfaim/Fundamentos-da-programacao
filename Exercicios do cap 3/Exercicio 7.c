#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. */

int main ()
{

    float peso, novo_peso1, novo_peso2;

    printf ("Digite seu peso atual: ");
    scanf ("%f%*c", &peso);

    novo_peso1 = peso +(peso*0.15);
    novo_peso2 = peso -(peso*0.2);

    printf ("\nSeu peso com 15 porcento a mais de peso sera de: %.2f", novo_peso1);

    printf ("\nSeu peso com 20 porcento a menos de peso sera de: %.2f", novo_peso2);




    return 0;
}