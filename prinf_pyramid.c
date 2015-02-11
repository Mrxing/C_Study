/*
 * File Name: prinf_pyramid.c
 * Author: Allan Xing
 * Date: 2015年02月10日 星期二 16时11分15秒
 */
#include <stdio.h>

void pyramid1(void)
{
/*  *
 *  **
 *  ***
 *  ****
 *  *****
 *
 */
	int i,j;
	for(i = 1; i <= 5; i++)
	{
		for(j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pyramid2(void)
{
/*     *
 *    * *
 *   * * *
 *  * * * *
 * * * * * *
 */
	int i,j;
	for(i = 0; i < 5; i++)
	{
		for(j = 5 - i; j > 0; j--)
		{
			printf(" ");
		}
		for(j = 5 - i; j <= 5; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pyramid3(void)
{
/*     * * * * *
 *      * * * *
 *       * * *
 *        * *
 *         *
 */
	int i,j;
	for(i = 0; i < 5; i++)
	{
		for(j = 5-i; j <= 5; j++)
		{
			printf(" ");
		}
		for(j = i; j < 5; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main(void)
{
//	pyramid1();
	pyramid3();
	return 0;
}
