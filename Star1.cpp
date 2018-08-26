#include <cstdio>

int N;
int i, j;
int main(){

	while((scanf("%d",&N)) && (N>=1 && N<=100 ))
	{
		for(i=1;i<=N;i++){
			for(j=1;j<=i;j++){
				printf("*",i);}
			printf("\n");
		}
	}

}

//////////출력초과 뜸  -> 해결할것