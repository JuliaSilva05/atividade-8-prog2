//atv 8 q 5
#include <stdio.h>
#include <stdlib.h>

int q_cinco(int N){
    printf("%d\n", N );
    if (N==0){
        return 0;
    } else{
        return q_cinco(N-1);
    }
}

int main()
{
    int i;
    int N;
    printf("Digite um número ");
    scanf("%d",&N);
    q_cinco(N);
        
}