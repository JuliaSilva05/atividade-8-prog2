//atv 8 q 1
#include <stdio.h>
#include <stdlib.h>
int soma(int N)
{
    if (N==0){
        return 0;
    } else{
        return N+soma(N-1);
    }
}

int main(){
    int num = 0;
    int i = 0;
    int r = 0;
    printf("Digite um numero: ");
    scanf("%d",&num);
    r = soma(num);
    printf("%d",r);
}