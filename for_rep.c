#include<stdio.h>
int main()
{
	int i,j,tot_rep,rep;
	char ch;
	////////기말////////기말////////기말////////기말////////기말
	printf("반복횟수 입력:");
	scanf("%d",&tot_rep);
	
	for(i=0;i<tot_rep;i++) 
	{
		printf("문자와 회수 입력");
		getchar();
		scanf(" %c%d",&ch,&rep);//scanf(" %c%d",&ch,&rep);  %c를 띄우고안띄우고차이있 
	
			for(j=0;j<rep;j++)
		{
			printf("%c",ch);	
		}
	  printf("\n");
	} 
}
