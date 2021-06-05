#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem. 
Categoria-------- Idade
infantil--------- 5 a 7
Juvenil --------- 8 a 10
Adolescente------ 11 a 15
Adulto----------- 16 a 30
Sênior----------- Acima de 30 */

int main ()
{
    int idade;
    //Entrada de dados
    printf ("Digite a idade do nadador: ");
    scanf ("%d%*c", &idade);

    //Comparações e saida de dados
    if (idade<5){
        printf ("A crianca nao tem categoria definida", idade);
    }

    else if (idade>=5 && idade <=7){
        printf ("O nadador de idade %d se encaixa na categoria Infantil!", idade);
    }
    
    else if (idade>=8 && idade <=10){
        printf ("O nadador de idade %d se encaixa na categoria Juvenil!", idade);
    }
    
    else if (idade>=11 && idade <=15){
        printf ("O nadador de idade %d se encaixa na categoria Adolescente!",idade);
    }
    else if (idade>=16 && idade <=30){
        printf ("O nadador de idade %d se encaixa na categoria Adulto!", idade);
    }
    else {
        printf ("O nadador da idade %d se encaixa na catergoria Senior!", idade);
    }

    return 0;
}