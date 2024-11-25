#include <stdio.h>
int main(){
    int b;
    printf(" nhap so can tinh \n");
    scanf("%d",b);
    int a;
    int c=0;
    for(a=0;a<b;a++){
        c+=a;
        if(a==b){
            printf("%d",c);
        }
    }
}