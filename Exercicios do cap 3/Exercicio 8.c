#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas*/

int main ()
{
    float peso;
    float gramas;

    printf ("Digite o seu peso para a conversao: ");
    scanf ("%f%*c", &peso);

    gramas = peso*1000; // conversao do KG pra gramas.

    printf ("\nA conversao do seu peso em gramas e de: %.2f", gramas);
    

    return 0;
}