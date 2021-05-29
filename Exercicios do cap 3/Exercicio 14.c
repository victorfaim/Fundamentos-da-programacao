#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas. */

int main ()
{
    int ano_nasc, ano_atual;
    int idade_anos; // declaro só a idade de anos como inteiro por considerarmos 20 anos e nao 20.3 anos
    float idade_meses, idade_dias, idade_semanas;

    printf ("Digite seu ano de nascimento: ");
    scanf ("%d%*c", &ano_nasc);
    
    printf ("Digite o ano atual: ");
    scanf ("%d%*c", &ano_atual);
    
    idade_anos = ano_atual - ano_nasc;
    idade_meses = idade_anos*12;
    idade_dias = idade_anos*365;
    idade_semanas = idade_anos*52.143; // temos 52 duas semanas e 1 dia em um ano de 365 dias

    printf ("Sua idade em anos e de: %d anos", idade_anos);
    printf ("\nSua idade em meses e de: %.1f meses ", idade_meses);
    printf ("\nSua idade em dias e de: %.1f dias ", idade_dias);
    printf ("\nSua idade em semanas e de: %.1f semanas ", idade_semanas);




    return 0;
}