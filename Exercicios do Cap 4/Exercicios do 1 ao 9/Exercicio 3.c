#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba dois números e mostre o menor*/

int main ()
{
    int n1, n2;
    // entrada de dados
    printf ("Digite dois numeros: ");
    scanf ("%d%*c", &n1);
    scanf ("%d%*c", &n2);
    // Comparações e saidas de dados.
    if (n1>n2){
        printf ("O numero maior e o %d", n1);
    }
    else {
        printf ("O numero maior e o %d", n2);
    }



    return 0;
}