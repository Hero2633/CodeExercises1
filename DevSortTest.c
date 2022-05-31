#include<stdio.h>
void Swap(int*a,int*b)
{int tmp=*a;
*a=*b;
*b=tmp;
}

int PartSort3(int*a,int left,int right)
{
	int key=a[left];
	int cur=left;
	int prev=left;
	int t=left;
	while(cur!=right+1)
	{
		if(a[cur]<key)
		{++prev;
		Swap(a+prev,a+cur);
		}
		cur++;
	}
	Swap(a+prev,a+t);
	return prev;
	
}
int PartSort1(int*a,int left,int right)
{
	int key=a[left];
    int  pivot = left;
	while (left < right)
	{
		while (left < right && a[right] <= key)
			--right;
		a[pivot] = a[right];
		pivot = right;
		while (left < right && a[left] >= key)
			++left;
		a[pivot] = a[left];
		pivot = left;

	}
	  
	a[pivot]=key;
	return pivot;
	
	
}
void QuickSort(int*a,int left,int right)
{
	if(left>=right)
	return;
	int pivont=PartSort3(a,left,right);
	QuickSort(a,left,pivont-1);
		QuickSort(a,pivont+1,right);
	
}

void PrintfArr(int*a,int l)
{
	int i=0;
	for(i=0;i<l;i++)
	printf("%d->",a[i]);
	
}
int main()
{
int a[]={4,5467,125,5412,876,2824,2,5,1,8};	
int len=sizeof(a)/sizeof(a[0]);
QuickSort(a,0,len-1);
PrintfArr(a,len);
	return 0;
 } 
