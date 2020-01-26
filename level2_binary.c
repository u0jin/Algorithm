//clear 0110
#include <stdio.h>
int main(){

    int arr[1000]={0,}; //나머지 저장
    int N,i,num;

    scanf("%d",&N);

    if(N>=1){
        for(i=0 ; i<=N;i++){
            arr[i] = N%2;
            num = i+1;

            N = N/2;
            //printf("%d %d %d\n",N,arr[i],i);

            if(N == 1){
                arr[num]=1;
            }


        }
    }
    //printf("%d\n",arr[num]);
    for(i=num; i>=0;i--){
        printf("%d",arr[i]);

    }

    return 0;
}