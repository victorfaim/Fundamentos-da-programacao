#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
 para homens: (72.7 * h) – 58.
 para mulheres: (62.1 * h) – 44.7. */

int main ()
{
    float altura, peso_ideal;
    char sexo;

    //Entrada de dados
    printf ("Digite sua altura em metros: ");
    scanf ("%f%*c", &altura);
    printf ("Digite seu Sexo (M/F)");
    scanf ("%c%*c",&sexo);
    tolower(sexo); // convertendo todos os caracteres para minusculo

    //Calculo e saidas!
    if (sexo=='m'){
        peso_ideal = (72.7*altura)-58;
        printf ("O seu peso ideal seria de: %.2f", peso_ideal);
    }
    
    if (sexo=='f'){
        peso_ideal = (62.1*altura)-44.7;
        printf ("O seu peso ideal seria de: %.2f", peso_ideal);
    }



    return 0;
}