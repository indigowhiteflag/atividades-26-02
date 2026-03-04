#include<stdio.h>
#include<string.h>

struct Cidadao
{
    int id;
    char nome[50];
    int idade;
};
void imprimirCidadao(struct Cidadao c)
{
    printf("ID: %d\n", c.id);
    printf("Nome: %s\n", c.nome);
    printf("Idade: %d\n", c.idade);
}
int main()
{
    struct Cidadao cidadao1;
    printf("Digite o ID");
    scanf("%d", &cidadao1.id);
    printf("Digite o nome");
    scanf("%s", cidadao1.nome);
    printf("Digite a idade");
    scanf("%d", &cidadao1.idade);

    imprimirCidadao(cidadao1);

    return 0;

}
