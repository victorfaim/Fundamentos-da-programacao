#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2*/

int main ()
{
    float altura, base_menor, base_maior;
    float area;

    printf ("Digite a maior base do trapezio: ");
    scanf ("%f%*c", &base_maior);
    
    printf ("Digite a menor base do trapezio: ");
    scanf ("%f%*c", &base_menor);
    
    printf ("Digite a altura do trapezio: ");
    scanf ("%f%*c", &altura);

    area = ((base_maior + base_menor)*altura)/2;

    printf ("A area do trapezio e de: %.2f", area);





    return 0;
}