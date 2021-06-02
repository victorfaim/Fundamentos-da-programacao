#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.*/

int main ()
{
    float salario, novo_salario;
    //Entrada dos dados
    printf ("Digite o valor do salario para saber se havera reajuste: ");
    scanf ("%f%*c", &salario);

    //Processamento e saida dos dados
    if (salario <500){
        novo_salario= salario + (salario*0.3); // calculo dos 30% caso seja menor que 500
        printf ("O salario %.2f tera reajuste de 30 porcento com um novo salario de: %.2f", salario, novo_salario);

    }
    else { // caso seja maior ou igual a 500 aparece a mensagem que nao sofrera reajuste
        printf ("O salario %.2f nao sofrera reajuste por ser maior ou igual a 500!", salario);
    }


    return 0;
}