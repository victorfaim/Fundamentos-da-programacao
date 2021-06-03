#include <stdio.h>
#include <stdlib.h>

/* Victor Hugo Faim 
victorfaim@hotmail.com
 Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.*/

int main ()
{
    int senha,valida=4531;//atribuindo valor para variavel de acordo com a senha do enunciado!
    //Entrada de dados
    printf ("Digite a senha: ");
    scanf ("%d%*c", &senha);

    //Validação da senha!:
    if (senha!=valida){
       printf ("Acesso negado!");
    }
    else {
       
       printf ("Acesso permitido!");
    }



    return 0;
}