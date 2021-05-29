#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações.*/
int main ()
{
    int num1, num2;
    float resultado;

    printf ("Digite um numero: ");
    scanf ("%d%*c", &num1);
    printf ("Digite um segundo numero: ");
    scanf ("%d%*c", &num2);
    
    resultado = num1/num2;

    printf ("O resultado da divisao do primeiro numero pelo segundo e de: %.2f", resultado);




    return 0;
}