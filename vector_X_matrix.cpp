
#include<stdio.h>
int main()
{
	int scanvector[2]= { };
	int matrix[2][3] = { };
	int printvector[3] = { };
	printf("�Էº���(1X2 scanvector)�� �Է��ϼ���\n");
	for(int l=0; l<2; l++)
	{
		scanf("%d",&scanvector[l]);
	}
	printf("���(2X3 matrix)�� �Է��Ͻÿ�\n"); 
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
	printf("����� ����մϴ�.\n"); 
	printf("��º���(1X3 printvector)\n");
	printf("{%d, %d, %d}",printvector[0],printvector[1],printvector[2]);
}

