// BaseStudy.cpp : 定义控制台应用程序的入口点。
//

/**
* scanf的返回值-》读入几个数就返回什么多少，当发生异常或则读到文件结束的时候返回EOF
* scanf->将左边的值赋值给右边的
* sprintf->将右边的赋值给左边
*
*
* 字符串的相关操作，需要包含和string.h头文件
* 编程的习惯：将右边的变量复制给左边的额变量
* 字符串操作的相关函数
* strcpy
* strcmp
* strcat
* strlen
*
* 输入输出函数
* puts->输出字符加上换行符
* putchar->输出单个字符
* gets->输入字符串并且以换行符作为结束的标志
* getchar->输入单个字符并且换行度作为结束的标志,返回值作为输入
*
*
* //结构体自定义构造函数，可以创建变量的时候也初始化变量
//也可以使用：初始化
// Person(char _name[20], int _age) : name(_name), age(_age){}
// Person(char _name[20],int _age){
//     strcpy(name,_name);
//     age = _age;
// }
*
* cin cout
*/

#include "stdafx.h"

#include <stdio.h>


int main()
{
	int n;
	char showChar;

	scanf("%d %c", &n, &showChar);


	int col = n / 2;

	for (int i = 0; i < col; i++) {
		for (int i = 0; i < n; i++) {
			if(i)
			printf("%c",showChar);
		}
		printf("\n");
	}

	while (1);
    return 0;
}

