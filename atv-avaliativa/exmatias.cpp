#include <stdio.h>
#include <string.h>


int getAbbrevName(char nomes[3][50])
{
    char copy[50];
    char copy2[50];
    for (int i = 0; i < 3; i++)
    {
        strcpy(copy, nomes[i]);
        char *token1 = strtok(copy, " "), *last, *next_last;
        char *primeiro_nome1;
        char *ultimo_nome2;

        int cont = 0;
        char iniciais[20] = {};
        
        strcpy(copy2, nomes[i]);
        while (token1 != NULL) {
            ultimo_nome2 = token1; 
            token1 = strtok(NULL, " ");
        }
        
        last = strtok(copy2, " ");

        while (true)
        {
            cont += 1;
            if (cont == 1)
            {
                primeiro_nome1 = last;
            }
            else
            {
                last = strtok(NULL, " ");
                if (last == NULL)
                {
                    break;
                }
                else 
                {
                    snprintf(iniciais + strlen(iniciais), sizeof(iniciais) - strlen(iniciais), "%c. ", last[0]);
                }
            }
        }
        iniciais[strlen(iniciais) - 3] = '\0';
        printf("Nome abreviado: %s %s%s\n", primeiro_nome1, iniciais, ultimo_nome2);
    }
    return 0;
}

int getFirstAndLast(char nomes[3][50]){
    for (int i = 0; i < 3; i++)
    {
        char *copia;
        char *token;
        char *primeiro_nome = NULL;
        char *ultimo_nome = NULL;
        strcpy(copia, nomes[i]);
        token = strtok(copia, " ");

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
    for (int p = 0; p < 3; p++)
    {
        printf("%c",nomes[p][0]);
        for (int o = 0; o < strlen(nomes[p]); o++)
        {
            if (nomes[p][o] == ' '){
                printf("%c",nomes[p][o+1]);
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
            getAbbrevName(nomes);
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
