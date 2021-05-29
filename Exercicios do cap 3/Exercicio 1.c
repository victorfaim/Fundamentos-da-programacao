#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo*/
int main()
{
    int num1, num2; // Declaração das variaveis do tipo inteiro
    int resultado;

    printf ("Digite um numero: ");
    scanf ("%d%*c", &num1); //Atribuindo valor a variavel ja limpando o buffer do teclado com o %*c
    printf ("Digite um segundo numero: ");
    scanf ("%d%*c", &num2);

    resultado=num1-num2; //Fazendo a conta proposta no exercicio ja atribuindo-a na variavel

    printf ("A subtracao do primeiro numero pelo segundo e de %d", resultado);

     
    return 0;
}
