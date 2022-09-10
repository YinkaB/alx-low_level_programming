#include<stdio.h>

/*
 * main - prints alphabet
 *
 * Description: prints alphabet using loop
 *
 * Return: 0
 **/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
