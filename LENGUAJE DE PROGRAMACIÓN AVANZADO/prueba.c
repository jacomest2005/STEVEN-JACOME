#include <stdio.h>
void main(){
    int r, n, n2;
    printf("Ingresa 1: \n");
    scanf("%d",&n);
    printf("Ingresa 2: \n");
    scanf("%d",&n2);
    r=n+n2;
    printf("TU SUMA ES: %d\n",r);
    if (r<10){
        printf("menorcita");
    }
    else{
        printf("mayorcita");
    }
}