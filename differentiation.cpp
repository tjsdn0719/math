#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i,j,n;
	int x,y=0,dy=0;	
	int coe[n],coef[n],xx[n+1];
	printf("�����Լ� �̺��ϱ�\n");
	printf("\n�ְ������� ������ �Է��ϼ���.\n");
	scanf("%d",&n);
	printf("�ְ������� �������  ����ױ��� ������ �־� ���ʴ�� �Է����ּ���.\n");
	
	for(i=n; i>=0; i--)
	{
		scanf("%d",&coe[i]);
	}
	
	printf("\nf(x)= ");
	
	for(i=n; i>=0; i--)
	{
		if(i==n)
			printf("%dx^%d",coe[i],i); 
		else
		{
			if(i!=0)
			{
				if(coe[i]>0)
					printf("+%dx^%d",coe[i],i);
				else if(coe[i]<0)
					printf("%dx^%d",coe[i],i);
			}
			else
			{
				if(coe[i]>0)
					printf("+%d\n",coe[i]);
				else if(coe[i]<0)
					printf("%d\n",coe[i]);
			}
		}
	}//f(x)������ ������ �ϴ� ���α׷� 
	
	printf("\nf'(x)= ");
	
	for(i=n-1; i>=0; i--)
	{
		
		coef[i]=(i+1)*coe[i+1];
		if(i==n-1)
			printf("%dx^%d",coef[i],i);
		else
		{
			if(i!=0)
			{
				if(coef[i]>0)
					printf("+%dx^%d",coef[i],i);
				else if(coef[i]<0)
					printf("%dx^%d",coef[i],i);
			}
			else
			{
				if(coef[i]>0)
					printf("+%d\n",coef[i]);
				else if(coef[i]<0)
					printf("%d\n",coef[i]);
			}
		}
	}//f'(x) �������� �������ϴ� ���α׷� 
	
	printf("\nx��ǥ���� �Է����ּ���.\n");
	scanf("%d",&x);
	
	printf("\nf(%d)= ",x); 
	
	for(i=0; i<n+1; i++)
	{
		xx[i]=1;
		for(j=0; j<i; j++)
			xx[i]*=x;
	}
	
	for(i=0; i<n; i++)
		y+=coe[i]*xx[i];
	
	for(i=0; i<n-1; i++)
		dy+=coef[i]*xx[i];
	
	printf("%d",y);	 
	printf("\nf'(%d)= ",x);
	printf("%d",dy);
	  
	return 0;
}

