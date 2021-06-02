#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
Acima de R$ 400,00 30% do saldo médio
R$ 400,00 R$ 300,00 25% do saldo médio
R$ 300,00 R$ 200,00 20% do saldo médio
Até R$ 200,00 10% do saldo médio*/

int main ()
{
    float media;

    //Entrada de dados
    printf ("Digite a media do seu salario: ");
    scanf ("%f%*c", &media);


    // Comparações e impressao dos valores (OBS Utilizei o proprio printf para o calculo evitando a criação de outra variavel!)
    if (media>400){
        printf ("O credito especial com base no salario de %.2f e de: %.2f", media, media+(media*0.3));

    }
    else if (media<400 && media >300){
        printf ("O credito especial com base no salario de %.2f e de: %.2f", media, media+(media*0.25));
    }
    else if (media<300 && media>200){
        printf ("O credito especial com base no salario de %.2f e de: %.2f", media, media+(media*0.2));
    }
    else {
        printf ("O credito especial com base no salario de %.2f e de: %.2f", media, media+(media*0.1));
    }


    return 0;
}