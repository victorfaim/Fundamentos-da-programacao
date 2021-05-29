#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha */

int main ()
{
    float salario, sala_min;
    float qntd;

    printf ("Digite o salario minimo atual: ");
    scanf ("%f%*c", &sala_min);

    printf ("Digite o seu salario atual: ");
    scanf ("%f%*c", &salario);

    qntd = salario/sala_min;

    printf ("Voce recebe um total de %.2f salarios minimos!", qntd);
    


    return 0;
}