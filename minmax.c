#include<stdio.h>
#include<limits.h>
int main()

{
	///printf("%d%d\n",INT_MAX,INT_MIN);
	int min = INT_MAX, max=INT_MIN, number;
	
	printf("������ �Է��ϼ���(���� ��Ʈ��z����)");
	///printf("%d",printf("123"));
	
	while(scanf("%d",&number) != EOF) 
	{
		if(number <min)
		    min=number;
		if(number>max)
		    max=number;
		    
	}
    if(min==INT_MAX)
      printf("�Է��Ѽ��ڰ�����");
    else
	  printf("�Է��� ���� �߿� �ּҰ�=%d,�ִ밪=%d�Դϴ�",min,max);
	return 0;
}
