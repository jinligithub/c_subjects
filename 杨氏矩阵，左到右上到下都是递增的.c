////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void find(int arr[3][3], int *px, int *py, int key)
{
	int x = 0;
	int y = *py - 1;
	while ((x <= *px) && (y >= 0))
	{

		if (arr[x][y] == key)
		{
			*px = x;
			*py = y;
			return;//�ҵ��˽���
		}
		else if (arr[x][y] > key)
		{
			y--;
		}
		else
		{
			x++;
		}
	}
	*px = -1;
	*py = -1;

}
int main()
{
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int x = 3;
	int y = 3;
	find(arr, &x, &y, 6);//�����Ͳ���
	if ((x != -1) && (y != -1))
	{
		printf("�ҵ���:%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	system("pause");
	return 0;

}