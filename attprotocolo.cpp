#include<stdio.h>
#include<string.h>
struct Processo{
    int numeroProtocolo;
    int status; //0 = em analise, 1 = deferido, 2 = indeferido

};

void atualizarStatus(struct Processo* p, int novoStatus){
    p->status = novoStatus;
}

int main(){
    struct Processo processo1;
    processo1.numeroProtocolo = 12345;
    processo1.status = 0; //em analise
    printf("Número do Protocolo: %d\n", processo1.numeroProtocolo);
    printf("Status: %d\n", processo1.status);

    //atualizando o status do processo para deferido
    atualizarStatus(&processo1, 1);

    printf("Numero do Protocolo: %d\n", processo1.numeroProtocolo);
    printf("Status: %d\n", processo1.status);

    return 0;
}