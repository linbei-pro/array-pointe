
#include<stdio.h>

void print1(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//也可以写成 printf("%d ",p[i][j]);  *（p+i）——> p[i]
		}
		printf("\n");
	}

}

int main() {

	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };

	print1(arr, 3, 5);
	//传arr ，因为arr是一个二维数组，二维数组名表示的是整个第一行的地址，所以在函数声明时，要用一个数组指针来进行接收。

	return 0;
}
