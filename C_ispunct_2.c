#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = '?';

	if (ispunct(a) == 0)
	{
		printf("�������� �ƴմϴ�.\n");
	}
	else
	{
		printf("�������Դϴ�.\n");
	}

	return 0;
}