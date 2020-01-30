#include <stdio.h>
int main(){

    int i,j=0;
    int diff=1;
    int num=0;
    int color[1000]={0,};
    int tmp;
    int cnt[1000]={0,}; 

    scanf("%d",&num);

    for( i = 0 ; i < num ; i ++){
        scanf("%d", &color[i]);
        
    }

    for( j = 0 ; j < num ; j++){
        for( i = 1 ; i < num-j ; i ++){
            if(color[i-1] > color[i]){
            tmp = color[i];
            color[i] = color[i-1];
            color[i-1] = tmp;
            }
        }
    }
// color 배열 오름으로 정리

    for(i=0;i<num;i++){
        printf("%d %d\n",color[i],cnt[i]);
    }
//확인완료

    for( i =0 ; i < num-1 ; i++){

        if(color[i] != color[i+1]){
            diff++;
            cnt[j] = color[i];
            j++;
        }
    }
// color 배열의 값이 다를경우 cnt 배열의 값으로 삽입

    for(i=0;i<num;i++){   
        printf("%d %d\n",color[i],cnt[i]);
    }

// 테스트

    return 0;
}