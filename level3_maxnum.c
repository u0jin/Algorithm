//clear 0129
#include <stdio.h>
int main(){
    int i,j,max=0;
    int num[10];
    int fin = 0;
    int cnt[10] = {0,};
    int represent=0;

    for( i = 0 ; i < 10 ; i++ ){
        scanf("%d",&num[i]);
        represent +=num[i];
    }

for(j=0;j<10;j++){
    for( i = j ; i < 9 ; i++ ){
        if(num[j] == num[i+1]){
            cnt[j]++;
        }
        
    }
}

for( i = 0 ; i<10 ; i++){
    if(max < cnt[i]){
        max = cnt[i];
    }
}

for(i=0;i<10;i++){
if(cnt[i] == max ){
    fin = num[i];
}
}

printf("%d\n",represent/10);

printf("%d\n",fin);


    
    return 0;
}