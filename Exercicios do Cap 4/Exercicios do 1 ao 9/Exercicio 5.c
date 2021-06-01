#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo*/

int main ()
{
    int n1,n2;
    int media;
    int opcao;
    // Entrada dos dados seguido do menu
    printf ("Digite dois numeros: ");
    scanf ("%d%*c", &n1);
    scanf ("%d%*c", &n2);
    printf ("\n======================\n");
    printf ("Lista de opcoes\n");
    printf ("1 Media entre os numeros digitados\n");
    printf ("2 Diferenca do maior pelo menor\n");
    printf ("3 Produto entre os numeros digitados\n");
    printf ("4 Divisao do primeiro pelo segundo\n");
    printf ("Digite a opcao desejada: ");
    scanf ("%d%*c", &opcao);
    // Comparações e calculos seguido das saidas.
    if (opcao == 1){
        media = (n1+n2)/2;
    printf ("A media dos numeros %d e %d e de: %d\n", n1, n2, media);
    }
    else if (opcao == 2){
        if (n1>n2){
        printf ("A diferenca do maior pelo menor e de: %d\n", n1-n2);
    }
    else {
        printf ("A diferenca do maior pelo menor e de: %d\n", n2-n1);
    }
    }
    else if (opcao == 3){
        printf ("O produto entre os numeros e de: %d\n", n1*n2);
    }
    else if (opcao == 4){
        printf ("A divisao do numero %d pelo %d e de: %d\n", n1,n2, n1/n2);
    }
    //Caso n seja selecionado nenhuma opção acima aparecera a mensagem de invalido!
    else {
        printf ("Opcao invalida!\n");
    }


    return 0;
}