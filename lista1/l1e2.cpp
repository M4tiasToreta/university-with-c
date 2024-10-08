#include<stdio.h>

int main(){
    int arr[15];
    bool found=false;
    for (int i=0; i<15;i++){
        printf("type the %d number: ", (i+1));
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<15;i++){
        if(arr[i]==30){
            printf("found number 30 in %d position of array", i);
            found = true;
        }
    }
    if (found == false){
        printf("No number 30 found in array");
    }
}