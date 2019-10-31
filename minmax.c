#include<stdio.h>
#include<limits.h>
int main()

{
	///printf("%d%d\n",INT_MAX,INT_MIN);
	int min = INT_MAX, max=INT_MIN, number;
	
	printf("정수를 입력하세요(끝은 컨트롤z누름)");
	///printf("%d",printf("123"));
	
	while(scanf("%d",&number) != EOF) 
	{
		if(number <min)
		    min=number;
		if(number>max)
		    max=number;
		    
	}
    if(min==INT_MAX)
      printf("입력한숫자가없다");
    else
	  printf("입력한 수들 중에 최소값=%d,최대값=%d입니다",min,max);
	return 0;
}
