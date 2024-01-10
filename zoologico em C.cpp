#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcao, quantidade;
    float comida, preco, qtde_comida_dia, qtde_comida_mes, preco_mes;

    printf("Proposta de portfólio, linguagem C\n");
    printf("~ Feito por: Marcus Vinicius Freire Souza\n");
    printf("~ Animais do zoologico: \n");
    printf("\n1- Urso polar");
    printf("\n2- Leao");
    printf("\n3- Tigre branco");
    printf("\n4- Aguia");
    printf ("\n5- Tubarao");
         while(1) {
        printf("\n~ Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1 || opcao < 1 || opcao > 5) {
            printf("Opcao invalida, tente novamente.\n");
            while (getchar() != '\n'); // Limpar o buffer do teclado
        } else {
            break;
        }
    }

    printf("\n~ Digite a quantidade de animais da Especie: ");
    scanf("%d", &quantidade);

    if (opcao == 1) {
        comida = 5.0;
        preco = 30.0;
    } else if (opcao == 2) {
        comida = 1.0;
        preco = 1.0;
    } else if (opcao == 3) {
        comida = 4.0;
        preco = 25.0;
    } else if (opcao == 4) {
        comida = 0.5;
        preco = 5.0;
    } else if (opcao == 5) {
        comida = 5.0;
        preco = 15.0;
    } else {
    printf("Opcao invalida, tente novamente.\n");
    return 1;
   }
    
    qtde_comida_dia = comida * quantidade;
    qtde_comida_mes = qtde_comida_dia * 30; 
    preco_mes = qtde_comida_mes * preco;

    printf("\nResultados: \n");
    printf("Qtde Comida ao dia: %.2f\n", qtde_comida_dia);
    printf("Qtde Comida ao mes: %.2f\n", qtde_comida_mes);
    printf("Custo Mensal: %.2f\n", preco_mes);
}

