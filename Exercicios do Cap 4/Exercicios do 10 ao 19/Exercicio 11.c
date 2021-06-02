#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
Até R$ 300,00 15%
R$ 300,00 R$ 600,00 10%
R$ 600,00 R$ 900,00 5%
Acima de R$ 900,00 0%*/

int main ()
{
    float salario;
    
    //Entrada de dados
    printf ("Digite o salario atual do funcionario: ");
    scanf ("%f%*c", &salario);

    //Comparações calculo e impressao dos valores (OBS Calculo feito dentro do printf evitando criação de outra variavel!)
    if (salario <300){
        printf ("O aumento do salario %.2f sera de 15 porcento resultando em: %.2f", salario, salario+(salario*0.15));
    }
    else if (salario>=300 && salario < 600){
        printf ("O aumento do salario %.2f sera de 10 porcento resultando em: %.2f", salario, salario+(salario*0.10));
    }
    else if (salario >=600 && salario < 900){
        printf ("O aumento do salario %.2f sera de 5 porcento resultando em: %.2f", salario, salario+(salario*0.05));
    }
    else {
        printf ("O salario %.2f nao sofrera reajuste por ser maior que 900!", salario);
    }

    return 0;
}