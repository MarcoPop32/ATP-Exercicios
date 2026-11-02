#include <stdio.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"portuguese"); //Localização de escrita para língua portuguesa

    //Declaração das variáveis
    char senha[10];
    char acesso[6] = "ASDFG";

    //Entrada de dados
    printf("Insira a senha de usuário: ");
    scanf("%s", &senha);

    //Condição de saída
    if(strcmp(senha, acesso) == 0){ //Função de comparação entre 2 strings
        printf("Acesso liberado.");
    }else{
    printf("Acesso negado! Tente novamente.");
    }

    return 0;
}
