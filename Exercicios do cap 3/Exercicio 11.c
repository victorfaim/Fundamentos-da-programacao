#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

 Faça um programa que calcule e mostre a área de um losango*/
int main ()
{
    float diag_maior, diag_menor;
    float area;

    printf ("Digite o tamanho da diagonal maior do losango: ");
    scanf ("%f%*c", &diag_maior);

    printf ("\nDigite o tamanho da diagonal maior do losango: ");
    scanf ("%f%*c", &diag_menor);

    area = (diag_maior * diag_menor)/2; // calculo da area do losango

    printf ("A area do losango e de: %.2f", area);

    return 0;
}