// BaseStudy.cpp : �������̨Ӧ�ó������ڵ㡣
//

/**
* scanf�ķ���ֵ-�����뼸�����ͷ���ʲô���٣��������쳣��������ļ�������ʱ�򷵻�EOF
* scanf->����ߵ�ֵ��ֵ���ұߵ�
* sprintf->���ұߵĸ�ֵ�����
*
*
* �ַ�������ز�������Ҫ������string.hͷ�ļ�
* ��̵�ϰ�ߣ����ұߵı������Ƹ���ߵĶ����
* �ַ�����������غ���
* strcpy
* strcmp
* strcat
* strlen
*
* �����������
* puts->����ַ����ϻ��з�
* putchar->��������ַ�
* gets->�����ַ��������Ի��з���Ϊ�����ı�־
* getchar->���뵥���ַ����һ��ж���Ϊ�����ı�־,����ֵ��Ϊ����
*
*
* //�ṹ���Զ��幹�캯�������Դ���������ʱ��Ҳ��ʼ������
//Ҳ����ʹ�ã���ʼ��
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

