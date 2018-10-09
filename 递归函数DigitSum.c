3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

#include<stdio.h>
#include<stdlib.h>
int Digitsum(int n)
{
	if (n < 10)
		return n;
	else
		return n % 10 + Digitsum(n / 10);
}
int main()
{
	int n = 0;
	int ret = 0;
	printf("请输入数字:");
	scanf("%d", &n);
	ret = Digitsum(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
