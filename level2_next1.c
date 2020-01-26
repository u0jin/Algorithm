//clear 0112
#include <stdio.h>


//단, 이차원 배열을 활용하시오

int main(){

    int i,j;
    int arr[100][100]={0,};
    int num=1;
    int n,m;
    scanf("%d %d",&n,&m);


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j] = num;
            printf("%d ",num);
            num++;
        }
        printf("\n");

    }


    return 0;
}



/*
int main(){

    int i,j;
    int n,m;
    int num=1;

    scanf("%d %d",&n,&m);


    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

    return 0;
}*/