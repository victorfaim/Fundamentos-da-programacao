#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */

int main ()
{
    float salario;
    float novo_salario;
    float vendas;

    printf ("Digite o salario do funcionario: ");
    scanf ("%f%*c", &salario); // pega o salario e limpa o buffer do teclado
    printf ("Digite o total de vendas do funcionario: ");
    scanf ("%f%*c", &vendas);

    novo_salario= salario+ (vendas*0.04); // calculo do salario + a comissao de 4% nas vendas

    printf ("O salario do funcionario com a comissao de 4 porcento e de: %.2f", novo_salario);
    

    return 0;
}