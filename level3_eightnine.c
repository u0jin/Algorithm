//clear 0131
#include <stdio.h>
int main(){

    int i,j;
    int arr[110][110]={0,};
    int N,M;

    scanf("%d %d",&N,&M);
    
    for( i = 1 ; i <=N ; i++){
        for( j = 1 ; j <= M ; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for( i = 1 ; i <=N ; i++){
        for( j = M ; j >= 1 ; j--){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}