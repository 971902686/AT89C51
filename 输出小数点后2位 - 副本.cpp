#include<stdio.h>
int main()
{
int i,j;
scanf("%d,%d",&i,&j);
float h;
h=(float) (i*100/j)/100;  /*  15/4=3.75,��15��4Ϊint�����Ϊint,��ǿ��ȡ����
                               ��*100��ȡ��ʱ�ʹ�����2λС�����ٳ���100ȡ
							   float�ͣ��ͳ�С�����2λ*/ 
    printf("%.2f",h);
}