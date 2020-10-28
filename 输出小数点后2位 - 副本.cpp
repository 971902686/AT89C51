#include<stdio.h>
int main()
{
int i,j;
scanf("%d,%d",&i,&j);
float h;
h=(float) (i*100/j)/100;  /*  15/4=3.75,而15和4为int，相除为int,会强制取整，
                               但*100后取整时就带上了2位小数，再除以100取
							   float型，就出小数点后2位*/ 
    printf("%.2f",h);
}