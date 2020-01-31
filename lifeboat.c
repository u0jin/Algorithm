#include <stdio.h>
int main(){

    int i,j;
    int n;
    int cnt=0;
    int limit=0;
    int arr[50000]={0,};
    int tmp=0;

    scanf("%d",&limit);

    for( i = 0 ; i < 50000 ; i++){
        scanf("%d",&arr[i]);

        if('\n' == arr[i]){
            n=i;
            break;
        }
    }

 
    for ( i = 0 ; i < n ; i++){
        for( j = i+1 ; j < n ; j ++){
            if(arr[j-1] > arr[j]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }
    for( i = 0 ; i < n ; i ++){
        for( j = i+1 ; j < n-1 ; j++){
            if(arr[i] + arr[j] < limit){
                cnt++;
            }
            else{
                cnt++;
            }
        }
    }

    printf("%d",cnt);



    return 0;
}