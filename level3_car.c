//clear 0126
#include <stdio.h>
int main(){
    int i;
    int num;
    int cnt=0;
    int car;

    scanf("%d",&num);

    for(i=0;i<5;i++){
        scanf("%d",&car);
        if(num == car){
            cnt++;
        }
    }

    printf("%d",cnt);

    return 0;
}