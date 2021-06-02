#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
Faixa Salarial----------|--% De Aumento
Até R$ 300,00           |        50%
R$ 300,00 R$ 500,00     |        40%
R$ 500,00 R$ 700,00     |        30%
R$ 700,00 R$ 800,00     |        20%
R$ 800,00 R$ 1.000,00   |        10%
Acima de R$ 1.000,00    |        5%*/

int main ()
{
    float salario; // Declaração como float pois o salario pode ser um numero real!

    //Entrada de dados

    printf ("Digite o salario do funcionario!: ");
    scanf ("%f%*c", &salario);
    // Comparações e impressao do salario atualizado! (OBS Utilizei o proprio printf para calculo do novo salario evitando a criação de uma nova variavel!)
    
    if (salario<300){
        printf ("O salario de %.2f sofrera aumento de 50 porcento resultando em: %.2f\n", salario, salario+(salario*0.5));
    }
    else if (salario>=300 && salario < 500){
        printf ("O salario de %.2f sofrera aumento de 40 porcento resultando em: %.2f\n", salario, salario+(salario*0.4));
    }
    else if (salario >= 500 && salario < 700){
        printf ("O salario de %.2f sofrera aumento de 30 porcento resultando em: %.2f\n", salario, salario+(salario*0.3));
    }
    else if (salario >= 700 && salario < 800){
        printf ("O salario de %.2f sofrera aumento de 20 porcento resultando em: %.2f\n", salario, salario+(salario*0.2));
    }
    else if (salario >= 800 && salario <1000){
        printf ("O salario de %.2f sofrera aumento de 10 porcento resultando em: %.2f\n", salario, salario+(salario*0.10));
    }
    else { // Qualquer valor de 1000 ou acima entrara nessa condição
        printf ("O salario de %.2f sofrera aumento de 5 porcento resultando em: %.2f\n", salario, salario+(salario*0.05));
    }


    return 0;
}