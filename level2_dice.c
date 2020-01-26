//clear 0124
#include <stdio.h>
int main(){

    int people ; 
    int dice[3];
    int sum = 0;
    int i,j;
    int max = 0; 

    scanf("%d", &people);

    for( j = 0; j < people ; j++ ){

        for( i = 0; i < 3 ; i++){
            scanf("%d",&dice[i]);
        }

        if(dice[0] == dice[1] && dice[0] == dice[2]){
            sum = 10000 + dice[0]*1000;
        }else if((dice[0] == dice[1] && dice[1] != dice[2]) || (dice[0] == dice[2] && dice[0] != dice[1])){
            sum = 1000 + dice[0]*100;

        }else if(dice[1] == dice [2] && dice[1] != dice[0] ){
            sum = 1000 + dice[1]*100;
           
        }else if(dice[0] > dice[1] && dice[0] > dice [2]){
                sum = dice[0]*100;
        }else if(dice[1] > dice[2] && dice[1] > dice[0]){
                sum = dice[1] * 100;
        }else {
                sum = dice[2] * 100;

        }
        

        for( i = 0; i < 3 ; i++){
            dice[i] = 0;
        }

        if(max < sum){
            max = sum;
            sum = 0;

        }
    }
    printf("%d",max);


    return 0;
}