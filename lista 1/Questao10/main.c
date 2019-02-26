#include <stdio.h>
 
int main(){
    
    struct cadatro_carro{
        char modelo[22];
        char cor [15];
        int ano;
        char fabricante[15];
        int portas;
        float aluguel;
    };

    for(int i = 0; i < 3; i++){
       cadatro_carro carro = cadatro_carro;
        printf("Modelo do Carro: ");
        scanf("%c",&carro.modelo);
        printf("Cor : ");
        scanf("%c",&carro.cor);
        printf("fabricante: ");
        scanf("%s",&carro.fabricante);
        printf("ano: ");
        scanf("%d",&carro.ano);
        printf("porta: ");
        scanf("%d",&carro.portas);
        printf("aluguel : ");
        scanf("%f", &carro.aluguel);
        }
        return 0; 
    }

    struct cadastro_cliente{
        char nome[100];
        char endereco[200];
        int celular;
        int datanasc;
    };

    for(int i = 0; i < 3; i++){
        cadastro_cliente cliente = cadastro_cliente;
        printf(" Nome do Clinte: ");
        scanf("%c", cliente.nome);
        printf("Edereço: ");
        scanf("%c", &cliente.endereco );
        printf("Telefone: ");
        scanf("%d", &cliente.celular);
        printf("data de nascimento : / / ");
        scanf("%d",&cliente.datanasc); 
    };
    
    struct cadastro_locacao{
        
        int dataloca;
        char cliente[100];
        char carro[15];
        int diasalug;
    };
    for(int i = 0; i < 3; i++){
        cadastro_locacao locacao = cadastro_locacao;
        printf(" Data Locacao : ");
        scanf("%d", &locacao.dataloca);
        printf("Clinte: ");
        scanf("%c", &locacao.cliente);
        printf("Carro: ");
        scanf("%c",&locacao.carro);
        printf("dias de aluguel : ");
        scanf("%d",&locacao.diasalug);
    };
}