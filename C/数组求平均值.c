#include<stdio.h>
int main()
{
	int i = 0;
	float endnum = 0;
	float sum=0;
	float a[10] = { 1.2,7,5,1.8,1.6,0.8,4,1.0,6,2.2 };
	for (;i < 10; i++)
	{
		sum = sum + a[i];
	}
	endnum = sum / 10;
	printf("平均值为%.2f\n", endnum);
	i = 0;
	for (; i <10; i++)
	{
		if (a[i] < endnum)
		{
			printf("%.1f\n", a[i]);
		}
	}
	return 0;
}