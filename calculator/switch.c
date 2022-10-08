#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ops;
	int num;
	int x;
	int result=0;

	
	printf("Enter a number: ");
	scanf("%d", &num);
	x = num;
	
	while (result==0)
	{
		/*printf("Enter a number and operation symbol: ");
		scanf("%d%c", &num, &ops);
		putchar('\n');*/

		printf("Enter an operation; ");
		scanf(" %c", &ops);
		switch(ops)
		{
			case '+':
				printf("Enter a number: ");
				scanf("%d", &num);
				x = x + num;
				break;

			case '-':
				printf("Enter a number: ");
				scanf("%d", &num);
				x -= num;
				break;

			case '*':
				printf("Enter a number: ");
				scanf("%d", &num);
				x *= num;
				break;

			case '/':
				printf("Enter a number: ");
				scanf("%d", &num);
				x /= num;
				break;

			case '=':
				result = x;
				break;

			default:
				printf("Invalid options\n");
				break;
		}
	}

	printf("Your final answer is: %d\n", result);
	return (0);
}
