#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
0,0 3,0 Reprovado
3,0 7,0 Exame
7,0 10,0 Aprovado*/

int main ()
{
    float n1,n2;
    float media;

    printf ("Digite as duas notas: ");
    scanf ("%f%*c", &n1);
    scanf ("%f%*c", &n2);

    media = (n1+n2)/2;


    if (media<=3){
        printf ("Aluno com media %.1f esta Reprovado!\n", media);
    }
    else if (media>3 && media<7){
        printf ("Aluno com media %.1f fara Exame!\n", media);
    }
    else {
        printf ("Aluno com media %.1f foi Aprovado!\n", media);
    }


    return 0;
}