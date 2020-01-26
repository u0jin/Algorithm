//clear0110

#include <stdio.h>
int main(){

    int Aarr[10];
    int Barr[10];
    int Acnt=0;
    int Bcnt=0;
    int i,j=0;

    for (i=0;i<10;i++){
        scanf("%d",&Aarr[i]);
    }

    for(i=0;i<10;i++){
        scanf("%d",&Barr[i]);
    }

    for(i=0;i<10;i++){
        if(Aarr[i]>Barr[i])
            Acnt++;
        else if(Aarr[i]<Barr[i])
            Bcnt++;
        else;

    }



    if(Acnt > Bcnt)
        printf("A");
    else if (Acnt < Bcnt)
        printf("B");
    else
        printf("D");

    return 0;
}