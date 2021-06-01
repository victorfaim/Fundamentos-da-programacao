#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba três números e mostre o maior*/

int main ()
{

    int n1, n2, n3;
    //Entrada de dados
    printf ("Digite 3 numeros: ");
    scanf ("%d%*c", &n1);
    scanf ("%d%*c", &n2);
    scanf ("%d%*c", &n3);
// Comparações e saida de dados
    if (n1 > n2 && n1 >n3){
        printf ("O maior numero e %d", n1);
    }
    else if (n2 > n3 && n2 >n1){
        printf ("O maior numero e %d", n2);
    }
    else{
        printf ("O mairo numero e %d", n3);
    }


    return 0;
}