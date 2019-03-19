#include <stdio.h>
#include <stdlib.h>

typedef struct Cel 
{

    int valor;
    struct estr *prox;

}; typedef struct Cel celula;
//Recebe um vetor de inteiros e devolve uma lista ligada de nos
celula deVetorParaLista(int *v, int t)
{
    int i;
    celula p = NULL;
    celula a = NULL;//endereco do no anterior
    celula lista = NULL;

    for(i = 0; i < t; i++ )
    {
        p = malloc(sizeof(celula));
        p->valor = v[i];
        p->prox = NULL;

        if(i==0)
        {
            //copia primeiro endereco para variavel a ser retornada
            lista=p;
        }else{
            //se nao for o primeiro elemento copia endereco para 'prox' do no anterior
            a->prox=p;
        }
        a=p;
    }
    return lista;
}

void imprimir(celula *p)
{
    printf("\n");
    while(p!=NULL)
    {
        printf("%d",p->valor);
        printf("\n");
        p=p->prox;
    }
}