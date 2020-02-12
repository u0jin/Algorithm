#include <iostream>
#include <stdio.h>

int main(){

    int i,j;
    int tmp;
    int a,b;
    int n;

    scanf("%d %d",&a,&b);

    if(a<b){
        tmp = a;
        a = b;
        b =tmp;
    }

    while(b!=0){
        n = a%b;
        a=b;
        b=n;

    }
    printf("%d",a);

    return a;
}