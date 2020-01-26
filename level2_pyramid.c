//clear 0126
#include <stdio.h>
int main(){

    int N,S;
    int back=0;
    int i,j,f=0,k,h=0,g,l;
    int cnt=0,d;

    scanf("%d %d", &N,&S);
    f = S;


    for( j = 0; j < N ; j++ ){
        for( i = N-j ; i > 0 ; i-- ){
            printf(" ");
        }

        if(j == 0 || j%2 != 0 ){
            for( k =0; k <= h ; k++ ){
                printf("%d",f);
                f++;  
                if(f == 10){f =1;}   
            }
            
            h+=2;
            d= h;
            cnt = f+d;
            printf("\n");

        }else if(j%2 == 0){
            for( l =0; l <= h ; l++ ){
                if(g >= 10){g= g-9;}
    
                if(g == 0 ){g =9;}   
                printf("%d",g);
                if(l == 0){
                      back =g;
                }

                g--;  
            }
            
            h+=2; 
            f = back+1;
            printf("\n");

        }
        //cnt = f;
        g = cnt;
        d= 0;


    }


    return 0;
}