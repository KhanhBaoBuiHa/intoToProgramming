#include "stdio.h"
#include "math.h"
int main(){
    int a,n;
    scanf("%d %d", &a,&n);
    float S=1+(a/n);
    for(int i=2;i<=n;i++){
        S+=(pow(a,i)/(i+1));
    }
    printf("%f",S);
    return 0;
}