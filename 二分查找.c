#define _CRT_SECURE_NO_WARNINGS 1
/*
二分查找：
在一个有序的序列中，找某个数据是否在该集合中，如果在打印该数据在集合中的下标，否则打印找不到

具体找的方式：
1. 找到数组的中间位置
2. 检测中间位置的数据是否与要查找的数据key相等
a: 相等，找到，打印下标，跳出循环
b: key < arr[mid], 则key可能在arr[mid]的左半侧，继续到左半侧进行二分查找
c: key > arr[mid], 则key可能在arr[mid]的右半侧，继续到右半侧进行二分查找

如果找到返回下标，否则继续，直到区间中没有元素时，说明key不在集合中，打印找不到

易错点：
1. right的右半侧区间取值，该值决定了后序的写法
2. while循环的条件是否有等号
3. 求中间位置的方法，直接相加除2容易造成溢出
4. 更改left和right的边界时，不确定是否要+1和-1
*/
#include<stdio.h>
#if 0
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 3;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//取right位置
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("找不到\n");
	return 0;
}
#endif