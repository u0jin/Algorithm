//clear 0110
#include <stdio.h>
int main(){
//9개의 서로 다른 자연수가 주어질때, 최대값이 몇번째 수 인지 구하라.

    int i;
    int N[10];
    int max = 0;
    int cnt = 0;

    for( i=0; i<9 ;i++){
        scanf("%d",&N[i]);
    }

    for( i=1;i<9; i++){

        if(N[i-1]<N[i]){
            if(max < N[i])
                max = N[i];
        }else {
            if(max < N[i-1]) {
                max = N[i-1];
                max = N[i-1];
            }
        }
    }

    for( i=0 ;i<9 ; i++){
        if(max == N[i]){
            cnt = i+1;
        }
    }
    printf("%d\n",max);
    printf("%d",cnt);



    return 0;
}
