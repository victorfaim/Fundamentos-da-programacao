#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.
Preço atual---------------% de Desconto
Até R$ 30,00 -------------Sem desconto
Entre R$ 30,00 e R$ 100,00----10%
Acima de R$ 100,00------------15%*/

int main ()
{
    float valor;
    int cod;
    // Entrada dos dados
    printf ("Digite o codigo do produto!: ");
    scanf ("%d%*c", &cod);
    printf ("\nDigite o valor do produto!: ");
    scanf ("%f%*c", &valor);

    //Comparações e saida dos dados
    if (valor<30){
        printf ("O produto do codigo %d Nao sofrera desconto!", cod);
    }
    else if (valor>=30 && valor <100){                                                       //Calculo do valor sem criar outra variavel!
        printf ("O produto do codigo %d tera o desconto te %.2f resultando num valor de %.2f", cod, valor*0.1,valor-(valor*0.1));
    }
    else {                                                                                  //Calculo do valor sem criar outra variavel!
        printf ("O produto do codigo %d tera o desconto de %.2f resultando num valor de %.2f", cod, valor*0.15, valor-(valor*0.15));
    }



    return 0;
}