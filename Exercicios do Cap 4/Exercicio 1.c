#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

int main ()
{
    float n1, n2, n3, n4;
    float media;

    printf ("Digite a primeira nota: ");
    scanf ("%f%*c", &n1);
    
    printf ("Digite a segunda nota: ");
    scanf ("%f%*c", &n2);
    
    printf ("Digite a terceira nota: ");
    scanf ("%f%*c", &n3);
    
    printf ("Digite a quarta nota: ");
    scanf ("%f%*c", &n4);

    media = (n1+n2+n3+n4)/4;

    if (media = 7){   
            printf ("Aluno da media %.1f aprovado!", media);
    }
    else {
        printf("Aluno da media %.1f reprovado", media);
    }


    return 0;
}