#include <stdio.h>
int main(){

    int i,j=0,k=0,q,w,l=0;
    int diff=1;
    int num=0;
    int color[1000]={0,};
    int tmp;
    int bin[5]={0,};
    int fin=0;
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


    for( i =0 ; i < num-1 ; i++){

        if(color[i] != color[i+1]){
            diff++;
            cnt[k] = color[i];
            k++;
        }
    }

    cnt[k] = color[num-1];

    if(diff < 3){
        printf("NO");
        return 0;
        
    }else if(diff>=6){
        printf("YES");
        return 0;         
6

    }


    printf("%d\n",diff);

    for( i = 0 ; i < diff ; i++){
        printf("%d ",cnt[i]);
    }
    printf("\n");

    for( i = 0 ; i < num ; i++){
        printf("%d ",color[i]);
    }


printf("\n");
for(j=0 ; j <diff ;j++){
    for(i=0;i<num;i++){
        if(cnt[j] == color[i]){
            bin[j]++;
        }
    }
}
    for(i=0;i<diff;i++){
    printf("%d ",bin[i]);
    }
printf("\n");


for(i=0;i<diff;i++){
    if(bin[i]==2){
        fin++;
    }
}
printf("%d\n",fin);

    if(fin >= 3){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}


