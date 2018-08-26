/**
2439 별찍기

00*
0**
***
이런형식으로 뽑아내야해

**/
#include <cstdio>

int N;  //줄 입력받기
void main()
{
	int i,j;

	while(scanf("%d",&N)<=100)
	{
		for(i=1;i<N+1;i++){//1번재 줄부터 시작, 몇번째 줄인지 확인
			
			for(j=N;j>=i+1;j--)  //1번째 줄에서 
			{
				printf("*");
				//공백
				printf("\n");
			}
			printf("\n");
		}

	}
	

}


