#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca para uso da função sqrt

/*Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa*/

int main ()
{

        int num1, num2;
        float hipot;

        printf ("Digite o tamanho do 1 cateto: ");
        scanf ("%d%*c", &num1);

        printf ("Digite o tamanho do 2 cateto: ");
        scanf ("%d%*c", &num2);

        hipot= sqrt((num1 * num1)+ (num2 * num2)); // usa-se sqrt para calcular a raiz quadrada (necessaria a biblioteca <math.h>)
        printf ("\nA hipotenusa dos catetos %d, %d e de %.2f", num1, num2, hipot);
        printf ("\n");

    return 0;
}