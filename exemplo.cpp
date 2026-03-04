/*precisa guardar dados de um servidor publico*/

#include<stdio.h>
#include<string.h>
//0. nova estrutura
struct Lotacao{
    char secretaria[50];
    char setor[50];
    int ramal;
};


// 1. Defininindo a estrutura do servidor público
struct ServidorPublico {
    int matricula;
    char nome[50];
    float salario;
    struct Lotacao local_trabalho; //composição

};
int main(){
    //2. inicializando um servidor público
    struct ServidorPublico servidor1;
    //3. atribuindo valores ao servidor público
    servidor1.matricula = 12345;
    strcpy(servidor1.nome, "João Silva");
    servidor1.salario = 5000.00;

    //3.1. atribuindo valores à lotação do servidor público
    strcpy(servidor1.local_trabalho.secretaria, "Secretaria de Educação");
    strcpy(servidor1.local_trabalho.setor, "Setor de Recursos Humanos");
    servidor1.local_trabalho.ramal = 1234;

    //4. imprimindo os dados do servidor público
    printf("Matricula: %d\n", servidor1.matricula);
    printf("Nome: %s\n", servidor1.nome);
    printf("Salário: %.2f\n", servidor1.salario);
    //4.1. imprimindo os dados da lotação do servidor público
    printf("Secretaria: %s\n", servidor1.local_trabalho.secretaria);
    printf("Setor: %s\n", servidor1.local_trabalho.setor);
    printf("Ramal: %d\n", servidor1.local_trabalho.ramal);

    return 0;
}
