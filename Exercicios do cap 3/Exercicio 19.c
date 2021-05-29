#include <stdio.h>
#include <stdlib.h>
 /*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
a sua área (em m2) e a potência de iluminação que deverá ser utilizada.*/

int main ()
{

    float dime1, dime2;
    float area, potencia;

    printf ("Digite a Primeira dimensao do comodo: ");
    scanf ("%f%*c", &dime1);

    printf ("\nDigite a Segunda dimensao do comodo: ");
    scanf ("%f%*c", &dime2);

    area = dime1*dime2; // pegando o metro ² do comodo

    potencia = area * 18; // Aqui faz-se a conta para saber quanto de potencia precisa

    printf ("\nA area do comodo e de %.1f metro quadrado entao sera necessario %.1fW de potencia\n\n", area, potencia);

    return 0;
}