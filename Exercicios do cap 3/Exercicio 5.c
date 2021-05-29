#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com

Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%. 
*/
int main ()
{
    float preco;
    float resultado;

    printf ("Digite o preco do produto a sofrer desconto: ");
    scanf ("%f%*c", &preco); // pega o preço e limpa o buffer do teclado

    resultado = preco- (preco*0.1);

    printf ("O novo preco com desconto de 10 porcento e de: %.2f", resultado);



    return 0;
}