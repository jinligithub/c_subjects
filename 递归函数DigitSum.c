3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

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
	printf("����������:");
	scanf("%d", &n);
	ret = Digitsum(n);
	printf("%d", ret);
	system("pause");
	return 0;
}
