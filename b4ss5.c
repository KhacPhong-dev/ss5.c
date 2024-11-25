#include <stdio.h>
int main(){
    int a,b,c;
    printf("nhap so nguyen tu 1-10 \n");
    scanf("%d",a);
    if(a>0 && a<=10){
        for(b=1;b>10;b++){
            c=a*b;
            printf("%d",c);
        }
    }
}