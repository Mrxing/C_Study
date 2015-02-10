/*
 * File Name: for99.c
 * Author: Allan Xing
 * Date: 2015年02月09日 星期一 16时33分45秒
 */
#include <stdio.h>

int main()
{
	int i,j;
	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d * %d = %2d  ",i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
