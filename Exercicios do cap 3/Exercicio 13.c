#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

 Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário. */

int main ()
{
    int num,i;

    printf ("Digite um numero de 1 a 10 para ver a tabuada do mesmo: ");
    scanf ("%d%*c", &num);

/* Aqui faço toda operaçao dentro do printf que teremos como base o 5 onde ficaria 
"5 x i (numero do que se encontra o contador do laço) = 5*i (se considerarmos o i como 5 seria 5*5 que na saida ficaria 5 x 5 = 25)"*/
    for (i=0;i<=10;i++){
        printf ("\n%d x %d = %d", num, i, i*num); 


    return 0;
}