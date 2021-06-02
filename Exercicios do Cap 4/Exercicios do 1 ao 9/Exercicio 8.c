#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
Até R$ 300,00 35%
Acima de R$ 300,00 15%*/

int main ()
{
    float salario;
    // entrada de dados
    printf ("Digite o salario do funcionario para sofrer o reajuste!: ");
    scanf ("%f%*c", &salario);
    //Saida de dados, fiz o calculo dentro do proprio printf
    if (salario>300){
        printf ("O salario %.2f sofrera reajuste de 15 porcento resultando em: %.2f\n", salario, salario+(salario*0.15));

    }
    else {
        printf ("O salario %.2f sofrera reajuste de 35 porcento resultando em: %.2f\n", salario, salario+(salario*0.35));

    }


    return 0;
}