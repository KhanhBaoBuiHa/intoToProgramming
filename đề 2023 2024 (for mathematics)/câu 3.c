#include "stdio.h"
int main(){
    int stop, fee, start, end;
    float d[100]={0};
    int cnt=1;
    float sum=0,totalFee=0;
    while(1){
        printf("So tram cua tuyen thu %d: ",cnt);
        scanf("%d",&stop);
        if(stop==0) break;
        printf("\nCu li cua tuyen thu %d: ",cnt);
        d[0]=0;
        for(int i=1;i<stop;i++){
            scanf("%f",&d[i]);
        }
        printf("\nGia ve cua tuyen thu %d: ",cnt);
        scanf("%d",&fee);
        printf("Vi tri khach len va xuong tram o tuyen thu %d: ",cnt);
        scanf("%d %d",&start,&end);
        float temp=(d[end]-d[start])/d[stop-1];
        if(temp>0.75 && temp<=1)
            sum=fee;
        else if(temp>0.5 && temp<=0.75)
            sum=(3.0/4.0)*fee;
        else if(temp>0.25 && temp<=0.5) 
            sum=(1.0/2.0)*fee;
        else sum=(1.0/4.0)*fee;
        totalFee+=sum;
        cnt++;
    }
    printf("So tien khach phai tra :%.2f",totalFee);
    return 0;
}