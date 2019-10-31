#include<stdio.h>
int main()
{
	int j,i,n;
	
	printf("삼각형 길이 입력:");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
	    for(j=i;j>0;j--)
	    {
	    	printf(" ");
		}
		for(j=n+1-i;j>0;j--)
		{
			printf("*");
		}
	    printf("\n");   
	}
		
}
