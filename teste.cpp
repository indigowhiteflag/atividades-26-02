#include <stdio.h>

int main() {
    //tipos primitivos
    int inteiro = 10;  //tipo inteiro
    float decimal = 3.14;  //tipo ponto flutuante
    char caractere = 'A';  //tipo caractere
    bool booleano = true;  //tipo booleano
//tipos derivados ou compostos
int vetor[5] = {1, 2, 3, 4, 5};  //tipo array

int matriz[3][3] = {//matriz 3x3
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };

    struct Pessoa {//tipo struct
    char nome[50];
    int idade;
    };
    
    /* TIPOS DE PONTEIRO*/
    int* ponteiroInteiro = &inteiro;  //ponteiro para inteiro

    /*TADs - Tipos Abstratos de Dados */
    return 0;
}
