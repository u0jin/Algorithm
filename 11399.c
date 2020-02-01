#include <stdio.h>
 
int main(){
    int i,j;
    int people;
    int tmp;
    int max =0;
    int sum=0;

    int p[1000];

    scanf("%d",&people);

    for( i = 0 ; i  < people ; i ++){
        scanf("%d",&p[i]);
    }

    for(i =0;i<people ;i++){
        for(j=0;j<people-1;j++){
            if(p[j]>p[j+1]){
                tmp = p[j+1];
                p[j+1] = p[j];
                p[j] = tmp;
            }
        }
    }
    for( i = 0 ; i < people ; i++){
        max +=p[i];
        sum += max;
    }

    printf("%d",sum);




    return 0;
}