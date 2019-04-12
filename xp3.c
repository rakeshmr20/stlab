#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a,b,c;
	/*printf("%d\n", argc);
	for (int i = 1; i < argc; ++i)
	{
		printf("%d\n", atoi(argv[i]));
	}*/
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	printf("\na=%d b=%d c=%d\n", a,b,c);
	if (a>0 && a<=10 && b>0 && b<=10 && c>0 && c<=10)
	{
		if ((a+b)>c && (a+c)>b && (b+c)>c)
		{
			printf("\2 YES\t");
			if (a==b && a==c)
			{
				printf("Equi\n");
			}
			else if (a==b || b==c || a==c)
			{
				printf("Iso\n");
			}
			else
				printf("Scalene\n");
		}
		else
			printf("Can't form Tri\n");
	}
	else
		printf("Can't form Tri\n");
	return 0;
}