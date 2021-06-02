#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
 TABELA 1 — Percentual de Aumento-------------------------
Preço                        |   %
Até R$ 50,00                 |   5
Entre R$ 50,00 e R$ 100,00   |   10
Acima de R$ 100,00           |   15
TABELA 2 — Classificações ---------------------------------
Novo Preço                             | Classificação
Até R$ 80,00                           |    Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) |    Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)|     Caro
Maior que R$ 200,00                    |  Muito caro*/

int main ()
{
    float preco, novo_preco;

    printf ("Digite o valor do produto!: ");
    scanf ("%f%*c", &preco); //%*c Usado para limpar buffer do teclado!

    //Calculo do novo preço!
    if (preco <50){
        novo_preco = preco + (preco*0.05);
    }
    else if (preco>=50 && preco<100){
        novo_preco = preco + (preco*0.1);
    }
    else {// Qualquer valor acima de 100 entrara nessa condição
        novo_preco = preco + (preco*0.15);
    }
    // Aqui sera feito as comparações dos novos preços e a saida!
    if (novo_preco<80){
        printf ("O novo valor do produto sera de %.2f e sera classificado como Barato! ", novo_preco);
    }
    else if (novo_preco>80 && novo_preco<=120){
        printf ("O novo valor do produto sera de %.2f e sera classificado como Normal! ", novo_preco);
    }
    else if (novo_preco>120 && novo_preco<=200){
        printf ("O novo valor do produto sera de %.2f e sera classificado como Caro! ", novo_preco);
    }
    else{ // Qualquer valor acima de 200 entrara nessa condição
        printf ("O novo valor do produto sera de %.2f e sera classificado como Muito caro! ", novo_preco);
    }





    return 0;
}