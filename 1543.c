#include <stdio.h>

int main(){
    int i=0;
    int n=0;
    char arr[2500];
    char search[50];


    do {
         scanf("%c",&arr[i]);
         i++;
         n++;
    }while (getc(stdin) == '\n' );

printf("%d",n)

    for( i=0;i<n;i++){
        printf("%c\n",arr[i]);}
    
    

    return 0;
}