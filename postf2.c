#include <stdio.h>

int main(void)
{
	int lookahead = getchar();

	while (lookahead != EOF) {
		switch (lookahead) {
		case '+' :
			if (isdigit(lookahead = getchar()))
				putchar(lookahead);
			else
				return 1;
			putchar('+');
			break;
		case '-' :
			if (isdigit(lookahead = getchar()))
				putchar(lookahead);
			else
				return 1;
			putchar('-');
			break;
		default :
			if (isdigit(lookahead))
				putchar(lookahead);
			else
				return 1;
			break;
		}
		lookahead = getchar();
	}
}
