#include <stdio.h>
#include <string.h>


int getFirstAndLast(char nomes[3][50]){
    char copy[50];
    for (int i = 0; i < 3; i++)
    {  
        strcpy(copy, nomes[i]);
        char *token = strtok(copy, " ");
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

    for (int i=0; i<3; i++){
        printf("Enter name %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
    }

    getFirstAndLast(nomes);

    getFirstLetters(nomes);
}

