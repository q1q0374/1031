#include<stdio.h>
int main()
{ 
	int i,j,tot_rep,rep;
	char ch;
	////////기말////////기말////////기말////////기말
	printf("반복횟수 입력:");
	scanf("%d",&tot_rep);
	
	i=0;
	while(i<tot_rep)
	{
		printf("문자와 회수 입력");
		getchar();
		scanf(" %c%d",&ch,&rep);//scanf(" %c%d",&ch,&rep);  %c를 띄우고안띄우고차이있 
	    j = 0;
		while(j<rep)
		{
			printf("%c",ch);
			j++;
		}
	  printf("\n");
		i++;
	 } 
	
}
