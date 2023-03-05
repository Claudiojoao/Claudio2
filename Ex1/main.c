#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;
struct no{
    char nome;
    struct no *prox;
};
No* criar_no(){
    No* novo = (No*)malloc(sizeof(No));
    return novo;
}

No* inserir_no_inicio(No* Lista, char stnome){
    No *novo_no = criar_no();
    novo_no->nome = stnome;
    if (Lista==NULL){
        Lista = novo_no;
        novo_no->prox=NULL;
    }else{
    novo_no->prox=Lista;
    Lista=novo_no;
    }
    return Lista;
}
void imprimir (No*Lista){
    No*aux= Lista;
    while(aux!=NULL){
        printf("%s", aux->nome);
        aux=aux->prox;
    }
}
int main()
{
    No *Lista = NULL;
    Lista=inserir_no_inicio(Lista,"Alvaro");
    imprimir(Lista);
    return 0;
}












