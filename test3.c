#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define Row 3
#define Col 4
void Input(int(*p)[Col], int m, int n)
{
	printf("Please input your data:");
	for (int i = 0; i < m * n;i++)
	{
		scanf("%d", *p + i);
	}
}/*数组元素读入函数*/
int FindMax(int(*p)[Col], int m, int n, int* pRow, int* pCol)
{
	int* a = NULL;
	int* t = NULL;
	int k = 0;
	int max = *pRow;
	for ( t = pRow; t <=pCol; t++)
	{
		if (*t > max)
		{
			max = *t;
			a = t;
		}
	}
	int i = 0;
	int j = 0;
	for ( i = 0; i < m; i++)
	{
		for  (j = 0; j < n; j++)
		{
			if (*(p+i)+j == a)
			{
				k = 1;
				break;
			}
		}
		if (k == 1)
		{
			break;
		}
	}
	printf("The maximum is %d, which is in row %d, colum %d\n", max, i, j);
	return max;

}/*求最大值及下标函数*/

int main()
{
	int arr[Row][Col] = { 0 };
	Input(arr, 3, 4);
	FindMax(arr,Row,Col,&arr[0][0],&arr[Row-1][Col-1]);
	//	用指针编程实现3X4的二维数组的元素读入以及求此二维数组的最大值及最大值下标
	//	请用以下函数实现：
	//	void Input(int(*p)[4], int m, int n); /*数组元素读入函数*/
	//int FindMax(int(*p)[4], int m, int n, int* pRow, int* pCol); /*求最大值及下标函数*/

	//***输入提示信息："Please input your data:\n"
	//	* **输入格式要求：无格式要求
	//	* **输出格式要求："The maximum is %d, which is in row %d, colum %d\n"

	//	样例：

	//	Please input your data :
	//**输入样例：
	//	3 5 2 7 1 6 12 11 4 10 8 9
	//	* *输出样例：
	//	The maximum is 12, which is in row 1, colum 2
	return 0;
}