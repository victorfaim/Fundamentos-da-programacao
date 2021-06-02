#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
Tipo--- Descrição------------- Rendimento Mensal
1-------Poupança------------------3%
2-------Fundos de renda fixa------4%*/

int main ()
{
    int tipo;
    float rendimento;

    //Entrada de dados
    printf ("Digite o tipo que voce fara o investimento!\n");
    printf ("1 Para Poupanca\n2 Para Fundos de renda fixa!: ");
    scanf ("%d%*c", &tipo);
    printf ("\nDigite o valor que sera investido!: ");
    scanf ("%f%*c", &rendimento);
    
    //Saida e calculos de dados (OBS Utilizei o proprio printf para calculo evitando criação de uma nova variavel!)
    if (tipo==1){
        printf ("O rendimento do valor %.2f em 1 mes na Poupanca sera de: %.2f", rendimento, rendimento+(rendimento*0.03));
    }
    else if (tipo==2){
        printf ("O redimento do valor %.2f em 1 mes nos Fundos de renda fixa sera de: %.2f", rendimento, rendimento+(rendimento*0.04));
    }
    //Nessa linha o enunciado não pediu mas caso queira da pra colocar mensagem de erro caso o usuario digite o tipo errado!
    /*else {
        printf ("Nao temos esse tipo de investimento em nosso banco!");
    }*/

    return 0;
}