#include "stdio.h"
#include "math.h"
float tinhKhoangCach(float d, int x0, int x, int y0, int y){
    d=sqrt((x0-x)*(x0-x)+(y0-y)*(y0-y));
    return d;
}
int main(){
    int p=0;
    while(1){
        int x, y;
        float d=0;
        int x0=0,y0=0,cnt=0;
        while(1){
            scanf("%d %d", &x,&y);
            if(x==0 || y==0) break;
            if(x0!=0) d+=tinhKhoangCach(d,x0,x,y0,y);
            x0=x;
            y0=y;
            cnt++;
        }
        printf("So diem dung: %d",cnt);
        printf("\nChieu dai hanh trinh: %.2f",d);
        p++;
        if(x==0 && y==0) break;
    }
    printf("\nTong so nguoi di bo: %d",p);
    return 0;
}