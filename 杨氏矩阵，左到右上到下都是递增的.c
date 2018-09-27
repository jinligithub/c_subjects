////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
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
			return;//找到了结束
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
	find(arr, &x, &y, 6);//返回型参数
	if ((x != -1) && (y != -1))
	{
		printf("找到了:%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	system("pause");
	return 0;

}