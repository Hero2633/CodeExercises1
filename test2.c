#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int n, m;
	/*int k = 0, p = 0;
   	int arr[99] = { 0 };
	for (int i = 0; i < m * n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (  k= 0; k < n * m - 1; k++)
	{
		for ( p = 0; p < n * m - 1; p++)
		{
			if (arr[p] > arr[p + 1])
			{
				int k = arr[p + 1];
				arr[p + 1] = arr[p];
				arr[p] = k;

			}
		}
	}
	for (int j = 1; j <= n * m; j++)
	{
		printf("%d ",arr[j-1]);
		if (j % m == 0)
		{
			putchar('\n');
		}
	}
	return 0;
}*/




	
 /* int cmp(const void* left, const void* right)
    {
	int* l = (int*)left;
	int* r = (int*)right;
	return *l - *r;

     }
	int main()
    {
		int n, m;
	scanf("%d%d", &n, &m);
	int k = 0, p = 0;
	int arr[99] = { 0 };
	for (int i = 0; i < m * n; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr,m*n,sizeof(arr[0]),&cmp);
	for (int j = 1; j <= n * m; j++)
	{
		printf("%d ", arr[j - 1]);
		if (j % m == 0)
		{
			putchar('\n');
		}
	}
	return 0;
}*/