#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 
 Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
mostre:
a) a hora digitada convertida em minutos;
b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos. */

int main ()
{
    int horas, minutos;
//Entrada dos dados
    printf ("Digite uma hora: ");
    scanf ("%d%*c", &horas);

    printf ("Digite os minutos: ");
    scanf ("%d%*c", &minutos);

 //Processamento e saida dos dados
    printf ("\n%d hora(s) = %d minutos", horas, (minutos*horas));
    printf ("\nTotal de minutos: %d", minutos + (minutos*horas));
    printf ("\nTotal de segundos: %d", (horas + minutos)*60);   


    return 0;
}