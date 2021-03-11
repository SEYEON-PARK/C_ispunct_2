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
	} // 상황에 맞게 출력하기

	return 0;
}
