#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas
 considerando peso 2 para a primeira e peso 3 para a segunda.*/

int main ()
{
    float nota1, nota2;
    float mediapond;

    printf ("Digite a primeira nota de peso 2: ");
    scanf ("%f%*c", &nota1);
    printf ("\nDigite a segunda nota de peso 3: ");
    scanf ("%f%*c", &nota2);

    mediapond = ((nota1*2)+ (nota2*3))/5; //Pegando valor da media ponderada onde é a 1 nota *2(peso 2)e a segunda nota *3 (peso 3)divindo as pela soma da multiplicação


    printf ("\nA media ponderada das notas e de: %.2f", mediapond);
    



    return 0;
}