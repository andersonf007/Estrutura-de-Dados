#include <stdio.h>
#include <stdlib.h>

struct Cel{
    int conteudo;
    struct Cel *seg;
};
typedef struct Cel celula;

celula c;
celula *p;

void imprimir (celula *lst){
    celula *p;
    for(p = lst->seg; p != NULL; p = p->seg){
        printf("%d  ", p->conteudo);
    }
}
celula *Busca (int x, celula *lst){
    celula *p;
    p = lst->seg;
    while(p != NULL && p->conteudo != x)
        p = p->seg;
    return p;
}
void remove(celula *p){
    celula *lixo;
    lixo = p->seg;
    p->seg = lixo->seg;
    free (lixo);
}
void insere (int y, celula *p){
    celula *nova;
    nova = malloc (sizeof (celula));
    nova->conteudo = y;
    nova->seg = p->seg;
    p->seg = nova;
}

void BuscaERemove(int x, celula *lst){
    celula *p, *q;
    p = lst;
    q = lst-> seg;
    
    while(q != NULL && q->conteudo != x){
        p = q;
        q = q->seg;
    }
    if(q != NULL){
        p -> seg = q->seg;
        free(q);
    }
}

void buscaEInserir (int y, int x, celula *lst){
    celula *p, *q, *novo;
    
    novo = malloc(sizeof(celula));
    novo ->conteudo = y;
    p = lst;
    q = lst -> seg;
    while( q != NULL && q-> conteudo != x){
        p = q;
        q = q ->seg;
    }
    novo -> seg = q;
    p -> seg = novo;
    
}

main(){
    
    celula c, *lst;
    c.seg = NULL;
    lst = &c;
    lst = malloc(sizeof(celula));
    lst->seg = NULL;
    
    insere(5,lst);
    insere(6,lst->seg);
    Busca(5,lst);
    imprimir(lst);
    remove(lst->seg);
    BuscaERemove(2,lst);
    buscaEInserir(7,8,lst);
}