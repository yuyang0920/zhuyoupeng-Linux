#include <stdio.h>


void func(int **p)
{
	*p = (int *)0x12345678;
}



int main(void)
{
	int a = 4;
	int *p = &a;				// pָ��a
	printf("p = %p.\n", p);		// p��ӡ��������a���ڴ��ַ
	func(&p);					// ��func�ڲ���pָ���˱�ĵط�
	printf("p = %p.\n", p);		// p�Ѿ���ָ��a�ˣ����Դ�ӡ��������a�ĵ�ַ
	*p = 23;					// ��Ϊ��ʱpָ��0x12345678�����������ַ�ǲ�
								// �������ʵģ���˻�δ���
	
/*	
	int *p1[5];
	int *p2;
	int **p3;
	
	//p2 = p1;
	p3 = p1;		// p1��ָ������������������������������������ֵ��ʾ������Ԫ��
					// �׵�ַ�������Ԫ�ؾ���int *���ͣ�����p1����ֵ�ͱ�ʾһ��int *
					// ���ͱ����ĵ�ַ������p1����һ��int���ͱ�����ָ���ָ�룬����
					// ������һ������ָ��int **��
*/	
	
/*
	char a;
	
	char **p1;		// ����ָ��
	char *p2;		// һ��ָ��
	
	printf("sizeof(p1) = %d.\n", sizeof(p1));
	printf("sizeof(p2) = %d.\n", sizeof(p2));
	
	p2 = &a;
	//p1 = &a;		// p1��char **���ͣ�&a��char *���͡�
					// char **���;���ָ��ָ��ı�����char *����
					// char *���ͱ�ʾָ��ָ��ı�����char���͡�
	p1 = &p2;		// p2������char *���ͣ���ȡ��ַ���char **���ͣ���p1���ݡ�
*/	
	
	return 0;
}


























