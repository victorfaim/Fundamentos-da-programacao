#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.
Código de Origem--------- Procedencia
     1-------------------- Sul
     2-------------------- Norte
     3-------------------- Leste
     4-------------------- Oeste
     5 ou 6--------------- Nordeste
     7 ou 8 ou 9---------- Sudeste
     10 a 20-------------- Centro-oeste
     21 a 30-------------- Nordeste*/

int main ()
{
    int cod;
    float preco;

    printf ("Digite o preco do produto: ");
    scanf ("%f%*c", &preco);
    printf ("Digite o codigo do produto: ");
    scanf ("%d%*c", &cod);

    if (cod==1){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Sul", preco, cod);
    }
    
    if (cod==2){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Norte", preco, cod);
    }
    
    if (cod==3){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Leste", preco, cod);
    }
    
    if (cod==4){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Oeste", preco, cod);
    }
    
    if (cod==5 || cod==6){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Nordeste", preco, cod);
    }
    if (cod==7 || cod==8 || cod==9){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Sudeste", preco, cod);
    }
    if (cod>=10 && cod<=20){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Centro Oeste", preco, cod);
    }
    if (cod>=21 && cod<=30){
        printf ("O produto de preco %.2f do codigo %d tem a procedencia Nordeste", preco, cod);
    }


    return 0;
}