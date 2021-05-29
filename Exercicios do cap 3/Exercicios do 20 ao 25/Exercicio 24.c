#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 
 Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
programa deve fazer as conversões e mostrá-las*/

int main ()
{
    float quantia, dolar, marco, libra;
    float quantia_final;

    printf ("Digite a quantia em Reais que voce possui: ");
    scanf ("%f%*c", &quantia);



// OBS: Não há necessidade de criação de novas variaveis para quantia sendo que atribuimos um valor novo para a mesma apos a impressao

//Processamento da quantia em dolar!
    quantia_final= quantia/1.8;
//Saida da quantia em dolar
    printf ("O valor em dolares e de: %.2f", quantia_final);

//Processamento da quantia em marco alemão!
    quantia_final= quantia/2;
//Saida da quantia em marco almão!
    printf ("\nO valor em Marco alemao e de: %.2f", quantia_final);

//Processamento da quantia em libra!
    quantia_final= quantia/3,57;
//Saida da quantia em libra!
    printf ("\nO valor em libra estrelina e de: %.2f", quantia_final);
  


    return 0;
}