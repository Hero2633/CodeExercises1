#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	FILE* pt = fopen("test.txt","w");//打开文件
//	if (pt==NULL)
//	{
//		perror("main");
//		return 0;
//
//	}
//	//写文件
//	fputc('a', pt);
//	fputc('a', pt);
//	fputc('a', pt);
//	char a=fputc('a',pt);//int fputc ( int character, FILE * stream );如果写入成功，则返回写入的字符的阿斯克码值；写入失败的话就就返回EOF；
//	printf("%d", a);
//	fclose(pt);
//	pt = NULL;
//
//	//关闭文件
//	return 0;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt", "w");
//	//打开文件
//	if (pt == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	//写文件
//	fputs("abcd\n\0ef",pt);//int fputs ( const char * str, FILE * stream );若写入成功的话就返回非负值，如果写入失败的话就会返回EOF；
//	fputs("比特科技",pt);
//	fputc('6', pt);
//	//关闭文件
//	fclose(pt);
//	pt = NULL;
//	return 0;
//}
//int main()
//{
//	//打开文件
//	FILE* pt = fopen("test.txt","r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	//读文件
//	
//
//	char q = fgetc(pt);//int fgetc ( FILE * stream );如果读取成功，则返回该字符的阿斯克码值;
// 若此时的指示符来到文件末尾，则返回EOF，并设置文件末尾指示符（feof）
//	 fgetc(pt);//如果发生其他读取错误，该函数也会返回 EOF，但会改为设置其错误指示器（ferror）。
//	int d=fgetc(pt);//
//		printf("%d ",d);
//
//	//关闭文件
//		fclose(pt);
//		pt = NULL;
//
//	return 9;
//}
//int main()
//{
//	//打开文件
//	FILE* pt = fopen("test.txt", "r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	//读文件
//	
//	char tmp[100] = {0};
//	fgets(tmp, 37, pt);//char * fgets(char* str, int num, FILE * stream);该函数只会读取num-1个字符，如果读取成功这返回str（此时str所指内容已被改变）
//	printf("%s", tmp);//读取失败返回空指针（str所指内容可能已被改变）
//	//若遇到\n则会停止读取，并且\n会被视为有效字符；在读取时，若遇到文件末尾标识，则会报错；
//	// 若在之前读到文件末尾标识符则会返回str原来的指针，此时（str所指内容未变）
//	//关闭文件
//	fclose(pt);
//	pt = NULL;
//
//	return 9;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt","w");
//	if (pt ==NULL)
//	{
//		perror("main:");
//		return 9;
//
//	}
//	int a = 90;
//	char sth[] = {"China!6766"};
//	fprintf(stdout,"%d %s",a,sth);//fprintf()用法和printf差不多，只不过printf只能在stdout流上输出，而fprintf能在任何输出流上输出；
// fclose(pt);
// pt=NULL;
//	return 0;
//}
//int main()
//{
//	/*FILE* p = fopen("test.txt","r");
//	if (p == NULL)
//	{
//		perror("main:");
//		return 8;
//	}
//	char a[16] = {3};
//	fscanf(p,"%s",&a);//.fscanf函数和scnaf函数一样用法，scanf只能从stdin流中读取东西，而fscanf能从任何输入流中读取
//	fprintf(stdout,"%s",a);
//	fclose(p);
//	p = NULL;*/
//	return 9;
//}
typedef struct s
{
	
	char q[12];

}ed;
//int main()
//{
//	FILE* pt = fopen("test.txt","w");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 8;
//	}                     //size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//
//	ed d= { 'a',"I love China!",12,3.1415f };
//	fwrite(&d,sizeof(ed),1,pt);
//	fclose(pt);
//	pt = NULL;
//	return 9;
//}
//int main()
//{
//	FILE* pt = fopen("test.txt","r");
//	if (pt == NULL)
//	{
//		perror("main:");
//		return 7;
//
//	}
//	ed f = { 0 };
//	fread(&f,sizeof(ed),1,pt);//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//	f.q[11] = 0;
//	fclose(pt);
//	pt = NULL;
//	fprintf(stdout,"%s",f.q);
//		return 8;
//
//}

