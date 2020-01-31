#include <stdio.h>
int main(){
    int i,j;
    int n,m;
    char skill[30];
    char skilltree[30];
    int fin = 0;
    int cnt = 0;

    for(i=0;i<30;i++){
        scanf("%1c",&skill[i]);
        if('\n' == skill[i]){
            n=i;
            break;
        }
    }
    
    for(i=0;i<30;i++){
        scanf("%1c",&skilltree[i]);
        if('\n' == skilltree[i]){
            m=i;
            break;
        }
    }
    
    for( i = 0 ; i < n; i++){
        for ( j = 0 ; j < m ; j++){
            if(skill[i] == skilltree[j]){
                if( fin < i){
                    fin = i;
                    cnt ++;
                }
            }
        }
    }

    printf("%d",cnt);

    return 0;
}