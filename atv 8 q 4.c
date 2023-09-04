//atv 8 q 4
#include <stdio.h>
#include <stdlib.h>

int q_quatro(int N, int m){
    printf("%d\n", m );
    if (N<=m){
        return 0;
    } else{
        return q_quatro(N,m+1);
    }
}

int main()
{
    int m = 0;
    int N;
    printf("Digite um número ");
    scanf("%d",&N);
    q_quatro(N,m);
        
}