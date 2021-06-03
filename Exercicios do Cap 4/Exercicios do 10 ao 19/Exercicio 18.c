#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não*/

int main ()
{
    int idade;

    printf ("Digite sua idade: ");
    scanf ("%d%*c", &idade);

    if (idade<18){
        printf ("Voce nao atingiu a maioridade!");
    }
    else {
        printf ("Voce atingiu a maioridade!");
    }



    return 0;
}