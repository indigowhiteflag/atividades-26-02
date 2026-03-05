#include<stdio.h>

struct GuiaArrecadacao {
    int numero_documento;
    float valor;
    char status; // p = pago, a = aberto
};
int main(){
    GuiaArrecadacao guia1[3];
    //inserindo os dados
    for(int i=0; i<3; i++){
        printf("Digite o numero do documento: ");
        scanf("%d", &guia1[i].numero_documento);
        printf("Digite o valor: ");
        scanf("%f", &guia1[i].valor);
        printf("Digite o status (p = pago, a = aberto): ");
        scanf(" %c", &guia1[i].status);
    }
    //exibindo os dados
    for(int i=0; i<3; i++){
        printf("Numero do documento: %d\n", guia1[i].numero_documento);
        printf("Valor: %.2f\n", guia1[i].valor);
        printf("Status: %c\n", guia1[i].status);
    }
    

}