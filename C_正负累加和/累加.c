/*
只要i不被[2, sqrt(i)]之间的任何数据整除
则i是素数，但是实际在操作时i不用从101逐渐递增到200
因为出了2和3之外，不会有两个连续相邻的数据同时为素数
*/
#if 0
#include<math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}
#endif
/*
思路：
1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
如果是，给计数器加1
b. 通过/的方式取当前数据的十位，检测十位数据是否是9，
如果是，给计数器加1
循环一直继续，直到所有的数据检测完，所有9的个数已经统计在count计数中。
*/
#if 0
int main()
{
	int count = 0;
	for (int i = 0; i <= 100; i++)
	{
		if ((i % 10 == 9) || (i / 10)==9)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("100内9的个数为：%d ", count);
    return 0;
}
#endif

/*
思路：
1. 从上述表达式可以分析出
a. 该表达式主要由100项，基数项为正，偶数项为负
2. 设置一个循环从1~100，给出表达式中的每一项：1.0/i, 注意此处不能使用1，否则结果全部为0
然后使用flag标记控制奇偶项，奇数项为正，偶数项为负
然后将所有的项相加即可
*/
#if 0
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = 1;
	}
	printf("1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值为：\n%lf\n", sum);
	return 0;
}
#endif