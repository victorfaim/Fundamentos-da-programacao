#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado */

int main ()
{
    float lado1, lado2;
    float area;

    printf ("Digite o primeiro lado do quadrado: ");
    scanf ("%f%*c", &lado1);
    
    printf ("Digite o segundo lado do quadrado: ");
    scanf ("%f%*c", &lado2);

    area = lado1*lado2; // calculo da area quadrada 

    printf ("A area do quadrado e de: %.2f", area);


    return 0;
}