#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr[] = { "abcdefg" };
//	printf("%d", strlen(arr));
//	return 0;
//}

//int main()
//{
//	char arr[26] = { "ABCDEFG" };
//	char arr2[] = { "abcdefg" };
//	strcpy(arr,arr+1);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
//int main()
//{
//
//	char arr[] = { "ABCDEFG" };
//	char arr1[] = { "abcdefg" };
//	strncpy(arr +1, arr1+5, 5);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//
//	char arr[] = { "ABCDEFG" };
//	char arr1[] = { "abcdefg" };
//	memcpy(arr + 1, arr1, 5);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//
//	char arr[26] = { "ABCDEFG" };
//	char arr1[] = { "ºó:abcdefg" };
//	//strcat(arr,arr1);
//	printf("%s", strcat(arr,arr1));
//	return 0;
//}
//int main()
//{
//
//	char arr[] = { "ABCDEFG" };
//	char arr1[] = { "abcdefgEFG" };
//	char* ret =strstr(arr, arr1+7);
//	printf("%s", ret);
//	return 0;
//}
struct book
{
	char name[20];
	float price;
	int num;

};
//int main()
//{
//	struct book mn= { 
//		"xiaomi",
//		3.14,
//		1210798 };
//	struct book* p = &mn;
//	/*char arr[] = { "ABCDEFG" };*/
//	/*char arr1[] = { "abcdefg" };*/
//	strncpy(arr + 1, arr1 + 5, 5);printf("%s", arr);
//	printf("%s %f %d\n", mn.name, mn.price, mn.num);
//	printf("%s %f %d\n",p ->name, (&mn)->price, p->num);
//
//	return 0;
//	
//}
struct k
{
	int a : 2;
	int b : 3;
	int c : 4;
	int d : 5;
	int e : 4;

};
int main()
{
	struct k p = { 0 };
	p.a = 10, p.b = 12, p.c = 13, p.d = 14, p.e = 15;
	printf("%d" , p);  
	return 0;
}