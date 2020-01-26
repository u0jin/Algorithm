//clear 0123
#include <stdio.h>
int main(){
    int N,sum=1,gg=3;
    int i,j;
    int arr[100][100];
    int f=0,k=1,h=3;
    int cnt=0;

    scanf("%d",&N); 

    for( i= 1; i <= N ; i++){
        for( j= 1 ; j <= N ; j++){
            arr[i][j] = sum ;
            sum += f + k ;
            f++;
            if(j == N){
                sum = 0;
                f=0;
                sum = sum +gg;
            }
        }
    gg += h ;
    k++;
    h++;

    }

    for( i= 1; i <= N ; i++){
        for( j= 1 ; j <= N-cnt ; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        cnt++;
    }

    return 0;
}