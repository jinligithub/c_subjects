2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Pow(n, k)
{
	if (k < 2)
		return n;
	else
		return pow(n, k);
}
int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("������n��k:");
	scanf("%d %d", &n, &k);
	ret = Pow(n, k);
	printf("%d", ret);
	system("pause");
	return 0;
}