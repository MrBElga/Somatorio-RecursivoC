#include <stdio.h>
#include <stdlib.h>

int somatorio(int n){
    if(n==1)
        return 1;
    else
        return (2*n-1)+somatorio(n-1);
}

int main(void){
    int i=1,n,res;

    scanf("%d",&n);
    res=somatorio(n);
	printf("%d",res);
    return 0;
}
