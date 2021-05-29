#include <stdio.h>
#include <stdlib.h>
 
 /* Victor Hugo Faim 
victorfaim@hotmail.com

João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João. */

int main ()
{
    float conta1, conta2;
    float multa1, multa2;
    float salario, resto_salario;

    printf ("Digite o salario de Joao: ");
    scanf ("%f%*c", &salario);

    printf ("Digite o valor da primeira conta em atraso: ");
    scanf ("%f%*c", &conta1);

    printf ("Digite o valor da segunda conta em atraso: ");
    scanf ("%f%*c", &conta2);

    multa1 = conta1 + (conta1*0.02);
    multa2 = conta2 + (conta2*0.02);
    resto_salario = salario - (multa1 + multa2); // pega o salario e subtrai a soma das duas contas ja com a multa de 2%

    printf ("\nA soma das duas contas em atraso ja com a multa de 2 porcento e de: %.1f", multa1+multa2);
    printf ("\nApos o Joao efetuar o pagamento de ambas as contas, sobrara para ele um total de %.2f do seu salario", resto_salario);


    return 0;
}