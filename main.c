#include <stdio.h>
int main()
{
	int n, m, a, b, c = 1, x = 1;
	printf("Please Choose Form:");
	scanf_s("%d", &m);
	printf("Please Input n:");
	scanf_s("%d", &n);
	switch (m)
	{
	case 1:
		c = n;
		for (b = 0; b<c; b++)
		{
			for (a = 1; a <= n; n--)
			{
				printf("%3d", x);
			}
			n = c;
			x++;
			printf("\n");
		}
		break;
	case 2:
		for (b = 0; b <= n / 2; b++)
		{
			c = 1;
			for (a = 0; a<n; a++)
			{
				printf("%3d", c);
				c++;
			}
			printf("\n");
			c = n;
			for (a = 0; a<n; a++)
			{
				printf("%3d", c);
				c--;
			}
			printf("\n");
		}
		break;
	case 3:
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				printf("%3d", a*b);
			}
			printf("\n");
		}
		break;
	default:
		printf("다른거 입력하셧어요.\n");
		break;
	}
	return 0;
}
