#include <stdio.h>

int main(){

    float nota1,nota2,nota3,nota4,total;
    printf("\nDigite a primeira nota:\n\n");
    scanf("%f",&nota1);

    printf("\nDigite a segunda nota:\n\n");
    scanf("%f",&nota2);

    printf("\nDigite a terceira nota:\n\n");
    scanf("%f",&nota3);

    printf("\nDigite a quarta nota:\n\n");
    scanf("%f",&nota4);

    total= (nota1+nota2+nota3+nota4)/4;

    if (total>=6){

    printf("\nO Aluno está Aprovado!\n\n");

    }
    else{
        printf("\nO Aluno está Reprovado!\n\n");
    }
    

}