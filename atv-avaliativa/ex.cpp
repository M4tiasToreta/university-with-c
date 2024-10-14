#include <stdio.h>

int main() {
    char nomes[3][49];

    for (int i=0; i<3; i++){
        printf("Digite o nome%d:\n", i+1);
        if (i==0) {
            scanf("%s", nomes[i]);
        }
        if (i==1) {
            scanf("%s", nomes[i]);
        }
        if (i==2) {
            scanf("%s", nomes[i]);
        }

        printf("%s", nomes[2]);
    }

    return 0;
}