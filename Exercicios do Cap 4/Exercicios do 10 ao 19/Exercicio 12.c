#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. 
Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.
Salario             |  Gratificação
Até R$ 350,00       |   R$ 100,00
R$ 350,00 R$ 600,00 |   R$ 75,00
R$ 600,00 R$ 900,00 |   R$ 50,00
Acima de R$ 900,00  |   R$ 35,00*/

int main ()
{
    float salario, novo_salario;

    //Entrada de dados
    printf ("Digite o valor bruto do salario!: ");
    scanf ("%f%*c", &salario); //%*c usado para limpar o buffer do teclado!

    //Comparações e calculo dos salarios seguido da gratificação e redução de 7% dos impostos.
    if (salario<350){
        novo_salario = salario-(salario*0.07)+100;
        printf ("O salario de %.2f com a gratificacao de 100 e com a subtracao do imposto sera de: %.2f\n", salario, novo_salario);
    }
    else if (salario>= 350 && salario <600){
        novo_salario = salario-(salario*0.07)+75;
        printf ("O salario de %.2f com a gratificacao de 75 e com a subtracao do imposto sera de: %.2f\n", salario, novo_salario);
    }
    else if (salario >= 600 && salario <900){
        novo_salario = salario-(salario*0.07)+50;
        printf ("O salario de %.2f com a gratificacao de 50 e com a subtracao do imposto sera de: %.2f\n", salario, novo_salario);
    }
    else {
        novo_salario = salario-(salario*0.07)+35;
        printf ("O salario de %.2f com a gratificacao de 35 e com a subtracao do imposto sera de: %.2f\n", salario, novo_salario);
    }



    return 0;
}