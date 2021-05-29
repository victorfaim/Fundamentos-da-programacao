#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

 Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo.
b) a hora extra vale 1/4 do salário mínimo.
c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
da hora extra.
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.*/

int main ()
{   
    double salario, valor_hora, valor_extra, hextra_areceber;
    double quantia_horas, quantia_extra, sal_bruto, sal_final;
//Entrada de dados
    printf ("Digite suas horas trabalhadas: ");
    scanf ("%lf%*c", &quantia_horas);

    printf ("\nDigite suas horas extras trabalhadas: ");
    scanf ("%lf%*c", &quantia_extra);

    printf ("\nDigite o salario minimo: ");
    scanf ("%lf%*c", &salario);
//Processamento dos dados
    valor_hora = salario/8;
    valor_extra = salario/4;
    sal_bruto= (quantia_horas * valor_hora);
    hextra_areceber= (quantia_extra *valor_extra);
    sal_final = sal_bruto + hextra_areceber;
//Saida de dados
     printf ("\nO salario final a ser recebido pelas horas trabalhas e horas extras e de : %.2f", sal_final);
    


    return 0;
}