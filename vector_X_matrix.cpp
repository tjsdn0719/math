
#include<stdio.h>
int main()
{
	int scanvector[2]= { };
	int matrix[2][3] = { };
	int printvector[3] = { };
	printf("입력벡터(1X2 scanvector)를 입력하세요\n");
	for(int l=0; l<2; l++)
	{
		scanf("%d",&scanvector[l]);
	}
	printf("행렬(2X3 matrix)를 입력하시오\n"); 
	for(int h=0; h<2; h++)
	{
		for(int s=0; s<3; s++)
		{
			scanf("%d",&matrix[h][s]);
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++)
		{
			printvector[i] += matrix[j][i]*scanvector[j];
		}
	}
	printf("결과를 출력합니다.\n"); 
	printf("출력벡터(1X3 printvector)\n");
	printf("{%d, %d, %d}",printvector[0],printvector[1],printvector[2]);
}

