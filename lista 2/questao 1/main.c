#include <stdio.h>
#include <stdlib.h>

struct cel{
    int conteudo;
    struct cel *seg;
};
typedef struct cel celula;

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