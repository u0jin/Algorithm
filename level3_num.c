//clear 0128
#include <stdio.h>
int main(){
    int i;
    int num;
    int sum=0;

    for ( i=0 ;i<5; i++){
        scanf("%d",&num);
        sum += num*num;
    }

    printf("%d",sum%10);
    return 0;
}