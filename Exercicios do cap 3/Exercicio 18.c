#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

 Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
 Fahrenheit. Sabe-se que F = 180*(C + 32)/100.*/

int main ()
{
    float celsiu, fahre;

    printf ("Digite a temperatura em Celsius para conversao: ");
    scanf ("%f%*c", &celsiu); // atribuindo valor a variavel

    /*A Formula para o calculo é de (°F = °C × 1, 8 + 32 que em programa ficaria fahre = (celsiu*1,8)+32) 
    mas no exercicio pede-se a formula 180*(C +32)/100 (entao seguimos de acordo com enunciado)*/
    fahre= 180*(celsiu+32)/100;

    printf ("\nA Temperatura %.1f celsius em Fahrenheit e de: %.1f\n\n", celsiu, fahre);



    return 0;
}