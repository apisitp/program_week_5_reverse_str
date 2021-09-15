#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>	
void main()
{
	char str[100];
	printf("Input : ");
	scanf("%s", &str);
	printf("Output : ");
	for (int x = strlen(str)-1; x >= 0; x--)
	{
		printf("%c", str[x]);
	}
}