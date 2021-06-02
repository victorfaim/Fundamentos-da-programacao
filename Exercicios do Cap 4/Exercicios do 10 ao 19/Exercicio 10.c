#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
Custo de Fabrica % do distribuidor % dos impostos
Até R$ 12.000,00      5             isento
EntreR$ 12.000,00 e R$ 25.000,00 10         15
Acima de R$ 25.000,00   15                  20*/

int main ()
{
    float custo, preco;
    // Entrada de dados
    printf ("Digite o custo de fabrica do veiculo: ");
    scanf ("%f%*c", &custo);
    // Comparaçoes de valores calculo dos novos preços e saidas!
    if (custo<12000){
        preco =  custo + (custo*0.05);
        printf ("O custo final do carro de valor %.2f sera de: %.2f", custo, preco);
    }
    else if (custo>12000 && custo < 25000){
        preco = custo + (custo*0.1)+(custo*0.15);
        printf ("O custo final do carro de valor %.2f sera de: %.2f", custo, preco);
    }
    else { // Nesse else entra qualquer valor acima de 25k!
        preco = custo + (custo*0.15)+ (custo*0.2);
        printf ("O custo final do carro de valor %.2f sera de: %.2f", custo, preco);
    }


    return 0;
}