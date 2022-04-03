#define _CRT_SECURE_NO_WARNINGS
//下列给定程序中，函数fun()的功能是求出数组中最小数和次最小数，并把最小数和a[0]中的数对调，次最小数和a[1]中的数对调。
//注意： 
//（1）请将修改正确后的完整源程序拷贝粘贴到答题区内。
//（2）对于没有错误的语句，请不要修改，修改原本正确的语句也要扣分。
//（3）当且仅当错误全部改正，且程序运行结果调试正确，才给加5分。
//#include <stdio.h>
//#define N 20
//void fun(int* a, int n)
//{
//    int i, m ,t, k;
//    for (i = 0; i < n; i++)
//    {
//        k = i;
//        for (m= i; m < n; m++)
//        {
//            if (a[m] < a[k])
//                k = m;
//        }
//        t = a[k];
//            a[k] = a[i];
//        a[i] = t;
//    }
//}
//int main()
//{
//    int b[N] = { 11,5,12,0,3,6,9,7,10,8 }, n = 10, i;
//    for (i = 0; i < n; i++)
//        printf("%d ", b[i]);
//    printf("\n");
//    fun(b, n);
//    for (i = 0; i < n; i++)
//        printf("%d ", b[i]);
//    printf("\n");
//    return 0;
//}