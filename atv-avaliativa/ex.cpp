#include <stdio.h>

int main() {
    char nome1[49], nome2[49];

    for (int i=0; i<3; i++){
        printf("Digite o nome%d:\n", i+1);
        if (i==0) {
            scanf("Digite o nome1: %s", nome1)
        }
        scanf("%s", nome1);

        printf("%s", nome1);
    }
    return 0;
}