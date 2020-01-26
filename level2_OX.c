//clear 0124
#include <stdio.h>
int main(){
    int i,j;
    int arr[100]={0,};
    int n,sum=0 ,cnt =0 ;
    int f=1;

    scanf("%d",&n);

    for(i=0; i<n;i++){
        scanf("%d",&arr[i]);

    }

    for ( i = 0; i < n; i++) 
    {
        if(arr[i] == arr[ i+1] && arr[i] == 1){

            cnt +=f;
            
            sum += cnt;

        }else if(arr[i] != arr [i+1] && arr[i] == 1){
            cnt +=f;
            
            sum += cnt;

        }else if(arr[i] != arr[i+1] && arr[i] == 0){
            f = 1;
            cnt = 0;
            sum += cnt;

        }

    }
    
    printf("\\\\\\\\\\\\\\");

    printf("%d ",sum);

    return 0;
}
/*
    for ( i = 0; i < n; i++) 
    {
        if(arr[i]== 1 && arr[i+1] == 0){
            cnt = 1;
        }else if (arr[i] == 1 && arr[i+1] == 1){
            cnt +=1;
        }else if(arr[i] != 1){
            cnt = 0;
        }else if(arr[i] == 0 && arr[i+1] == 1){
            cnt = 1;
        } 
        sum += cnt;
    }
    */