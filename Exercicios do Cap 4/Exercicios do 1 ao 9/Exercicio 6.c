#include <stdio.h>
#include <stdlib.h>
#include<math.h> // Necessaria pras funções matematicas como sqrt e pow.

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números. */

int main ()
{   
    int opcao;
    float n1, n2, raiz, raiz2, elevado;
    //Entrada dos dados junto com o menu de opções
    printf ("Digite dois valores: ");
    scanf ("%f%*c", &n1);
    scanf ("%f%*c", &n2);
    printf ("\nMenu de opcoes!\n");
    printf ("----------------------\n");
    printf ("Opcao 1: O primeiro numero elevado ao segundo numero.\n");
    printf ("Opcao 2: Raiz quadrada de cada um dos numeros.\n");
    printf("Opcao 3: Raiz cubica de cada um dos numeros\n");
    printf ("Digite a opcao desejada!: ");
    scanf ("%d%*c", &opcao);

    if (opcao == 1){
        elevado = pow(n1,n2); // função de elevação (Necessaria biblioteca MATH.H)
        
        printf ("O numero %.1f^%.1f e igual a %.1f", n1,n2,elevado);
    }
    else if (opcao == 2){
        //Saida dos dados ja com a raiz quadrada usando a função sqrt (Necessaria biblioteca MATH.H)
        printf ("A raiz quadrada do numero %.1f e %.1f e de: %.3f, %.3f", n1, n2, sqrt(n1), sqrt(n2));
    }
    else if (opcao == 3){
        //Nao temos uma função pronta para raiz cubica mas sabemos que que a raiz N de um número é o mesmo que esse número elevado a 1 / N
        raiz = pow(n1, 1.0 / 3.0);
        raiz2 = pow(n2, 1.0 / 3.0);
        //Saida de dados
        printf ("A raiz cubica de %.1f e %.1f e de: %.2f, %.2f", n1, n2, raiz, raiz2);
    }
    else {//Caso escolha qualquer opcao alem das citadas acima aparece o erro
        printf ("Opcao invalida!");
    }


    return 0;
}