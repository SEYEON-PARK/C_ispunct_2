#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '?'; // 초기화

	if (ispunct(a) == 0)
	{
		printf("구두점이 아닙니다.\n");
	}
	else
	{
		printf("구두점입니다.\n");
	}

	return 0;
}
