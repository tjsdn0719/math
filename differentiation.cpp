#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int i,j,n;
	int x,y=0,dy=0;	
	int coe[n],coef[n],xx[n+1];
	printf("다항함수 미분하기\n");
	printf("\n최고차항의 차수를 입력하세요.\n");
	scanf("%d",&n);
	printf("최고차항의 계수부터  상수항까지 공백을 넣어 차례대로 입력해주세요.\n");
	
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
	}//f(x)방정식 나오게 하는 프로그램 
	
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
	}//f'(x) 방정식이 나오게하는 프로그램 
	
	printf("\nx좌표값을 입력해주세요.\n");
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

