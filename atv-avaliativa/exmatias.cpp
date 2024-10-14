#include <stdio.h>
#include <string.h>


int getFirstAndLast(char nomes[3][50]){
    for (int i = 0; i < 3; i++)
    {
        char *token = strtok(nomes[i], " ");
        char *primeiro_nome = NULL;
        char *ultimo_nome = NULL;

        if (token != NULL) {
            primeiro_nome = token;  
        }

        while (token != NULL) {
            ultimo_nome = token; 
            token = strtok(NULL, " ");
        }

        if (ultimo_nome == primeiro_nome){
            printf("%s",primeiro_nome);
        } else{
            printf("%s %s",primeiro_nome,ultimo_nome);
        } 
    }

    return 0;
}

int getFirstLetters(char nomes[3][50]){
    for (int i = 0; i < 3; i++)
    {
        printf("%c",nomes[i][0]);
        for (int j = 0; j < sizeof(nomes[i]); j++)
        {
            if (nomes[i][j] == ' '){
                printf("%c",nomes[i][j+1]);
            }    
        }
        printf("\n");
    }
    return 0;
}

int main() {
    char nomes[3][50];
    char letra[1];

    for (int i=0; i<3; i++){
        printf("Enter name %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
    }

    printf("Escolha uma entre as próximas opcoes digitando na a letra da opcao.\n");
    printf("a) Abreviar nomes do meio\n");
    printf("b) Tirar nomes do meio\n");
    printf("c) Apenas primeiras letras\n");
    printf("s) para sair\n");
    while (2>1) {
        printf("Digite a letra\n");
        scanf("%s", letra);
        if(strcmp(letra, "a")==0) {
            printf("Em implementação\n");
        }
        else if(strcmp(letra, "b")==0) {
            getFirstAndLast(nomes);
        }
        else if(strcmp(letra, "c")==0) {
            getFirstLetters(nomes);
        }
        else if (strcmp(letra, "s")==0){
            break;
        }
        else {
            printf("Por favor, selecione uma letra válida.\n");
        }
    }
    
    return 0;
    
}

