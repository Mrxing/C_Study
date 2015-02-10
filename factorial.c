/*
 * File Name: factorial.c
 * Author: Allan Xing
 * Date: 2015年02月09日 星期一 16时42分14秒
 */
#include <stdio.h>

int f(int n)
{
	int m = 1;
	if(0 == n || 1 == n)
	{
		return 1;
	}
	else
	{
		int i = 2;
		while(i <= n)
		{
			m *= i;
			i++;
		}
		return m;
	}
	return 0;
}

int main(void)
{
	int num;
	printf("input the num: ");
	scanf("%d",&num);
	printf("%d's factorial is %d\n",num, f(num));
	return 0;
}
