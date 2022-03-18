#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
///////将源头的数据拷贝到目的地，返回目的地的指针可以自己拷贝自己，但不能有重叠。无长度限制
//int main()///////////////////////////////////////////////////////////////////////////右旋num个字符法2
//{
//	int num = 2;
//	scanf("%d", &num);
//	char arr[] = { "ABCDEF" };
//	while (num--)
//	{
//		int i = 0;//利用了strcpy（）函数自己拷贝自己
//		char a = arr[0];
//		strcpy(arr, arr + 1);
//		int len = strlen(arr);
//		char o = arr[len];
//		arr[len] = a;
//		arr[len + 1] = o;
//	}
//	printf("%s", arr);
//	return 0;
//}
//int main()////先保存前num个字符；再利用strcoy（）自己拷贝自己覆盖掉前num个字符
//int main()///////////////////////////////////////////////////////////////////////////右旋num个字符法3
//{
//	int num = 3;
//	char arr1[99] = { 0 };
//	char arr[] = { "ABCDEF" };
//	int i = 0;
//	for ( i = 0; i < num; i++)
//	{
//		arr1[i] = arr[i];
//	}
//	strcpy(arr, arr + num);
//	int len = strlen(arr);
//	char o = arr[len];
//	int j = 0;
//	for ( j = len, i=0; i<num&&j < len + num;i++, j++)
//	{
//		arr[j] = arr1[i];
//	}
//	arr[j] = o;
//	printf("%s", arr);
//	return 0;
//}