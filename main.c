#include <stdio.h>
#include <stdlib.h>
void error(void);
void term(void);
int lookahead;
void next(void);

int main(void)
{
	next();
	term();
	while (1) {
		switch (lookahead) {
		case '+' :
			next();
			term();
			putchar('+');
			break;
		case '-' :
			next();
			term();
			putchar('-');
			break;
		default :
			term();
			break;
		}
	}
}

void
term(void)
{
	if (isdigit(lookahead))
		putchar(lookahead);
	else
		error();
	next();
}


void
error(void)
{
	exit(-1);
}
void next(void)
{
	lookahead = getchar();
	if (lookahead == EOF)
		error();
}
