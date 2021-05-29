
#include <stdio.h>
#include <stdlib.h>

/*Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba três números, calcule e mostre a multiplicação desses números. */
int main ()
{
    int num1, num2, num3;
    int resultado;
    
    printf ("Digite um numero: ");
    scanf ("%d%*c", &num1);
    printf ("Digite um segundo: ");
    scanf ("%d%*c", &num2);
    printf ("Digite um terceiro: ");
    scanf ("%d%*c", &num3);

    resultado = num1*num2*num3; 

    printf ("O resultado da multiplicacao dos 3 numeros e de: %d", resultado);



    return 0;
}