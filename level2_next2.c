//clear 0112
#include <stdio.h>

// 2차원배열을 활용할것
int main(){
    int i,j;
    int n,m;
    int arr[100][100];
    int num=1;
    int k,l;


    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j] =num;
            printf("%d ",num);
            num++;

        }printf("\n");
    }

    scanf("%d %d",&k,&l);


    printf("%d",arr[k][l]);

    return 0;
}