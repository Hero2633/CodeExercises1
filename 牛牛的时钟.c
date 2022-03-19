#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main()
{
	unsigned int hour = 0;
	unsigned int minute = 0;
	 unsigned int k = 0;
	 printf("请输入当前时间:");
   eg1:scanf("%u:%u", &hour, &minute);
	if (hour > 23 || minute >= 60)
	{
		printf("输入非法,请重新输入:");
		goto eg1;
	}
	printf("请输入你想多久之后叫你(min):");
	scanf("%u", &k);
	if (k + minute >= 60)
	{
		hour = hour + (minute + k) / 60;
		minute = (k + minute) % 60;
	}
	if (hour >= 24)
	{
		hour = hour % 24;
	}
	printf("预计:%02u:%02u", hour, minute);
	return 0;
}