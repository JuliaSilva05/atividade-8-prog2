//atv 8 q 3
#include <stdio.h>
#include <stdlib.h>
int fibo(int N)
{
    if (N==0 || N==1){
        return N;
    } else{
        return fibo(N-1)+fibo(N-2);
    }
}

int main(){
    fibo;
}