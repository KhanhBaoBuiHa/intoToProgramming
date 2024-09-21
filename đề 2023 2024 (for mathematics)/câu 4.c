#include "stdio.h"
#include "math.h"
void coDayTuongDuong(){

}
int main(){
    int n,k;
    int a[100];
    printf("n= ");
    scanf("%d",&n);
    printf("\nk= ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int sumTempNumber=2, sumTemp=0, sumTemp2;
    while(1){
        int i=0;
        while(i<sumTempNumber){
            sumTemp+=a[i];
            i++;
        }
        for( ;i<n;i++){
            sumTemp2=a[i]+a[i+1];
            if(abs(sumTemp2-sumTemp)%k==0){
                printf("co day tuong duong");
                return 0;
            }
        }
        sumTempNumber++;
        if(sumTempNumber>n/2) break;
        i=0;
    }
    printf("khon co day tuong duong");
    return 0;
}