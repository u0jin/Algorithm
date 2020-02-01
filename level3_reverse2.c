//clear 0202
#include <stdio.h>
int main(){

    int i,j;
    int matrix[10][10]={0,};
    int n;

    scanf("%d",&n);

    for ( i=0;i<10 ; i ++){
        for( j = 0 ; j < 10 ; j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<n;i++){
        for(j=0;j<10;j++){
            if(matrix[i][j] == 0){
                matrix[i][j] = 1;
            }else{
                matrix[i][j] = 0;
            }
        }
        for(j=0;j<10;j++){
            if(matrix[j][i] == 0){
                matrix[j][i] = 1;
            }else{
                matrix[j][i] = 0;
            }
        }
        if(matrix[i][i] == 0){
            matrix[i][i] = 1;
        }
        
    }


    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}