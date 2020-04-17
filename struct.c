#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Livro
{
    char nome[30];
    char autor[50];
    int paginas;
    float preco;

};

struct Livro livro1;
int main() {
    //setLocale(LC_ALL, "");

    //Preenchendo dados de Livro
    printf("Cadastrando livro\n");
    printf("\nDigite o nome do livro:\n");
    gets(livro1.nome);
    printf("\nDigite o nome do autor:\n");
    gets(livro1.autor);
    printf("\nDigite o número de páginas do livro:\n");
    scanf("%d", &livro1.paginas);
    printf("\nEntre com o preço do livro:\nR$");
    scanf("%f", &livro1.preco);

    printf("\n===Dados do livro===\n");
    printf("Nome: %s \nAutor: %s\nNúmero de Páginas: %d\nPreço: R$%.2f\n", livro1.nome, livro1.autor, livro1.paginas, livro1.preco);

return 0;
}
