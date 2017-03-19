/*
 * prefix to postfix arithmetic
 *
 */

#include <stdio.h>
#include <ctype.h>
int isop(char c);
int expr(char c);
#define next() (lookahead = gettoken())

int gettoken(void);
int lookahead;
int main(void)
{
	int c;
	lookahead = gettoken();

}

int expr(void)
{
	char c;
	if (isdigit(lookahead)) {
		term();
}


int isop(char c)
{
	switch (c) {
	case '+':
	case '-':
/*	case '*':
 *	case '/':
 */
		return 1;
		break;
	default:
		return 0;
		break;
	}
}
int gettoken(void)
{
	int c;
	while (isspace(c = getchar()))
		;
	return c;
}

void match(char c)
{
	if (lookahead == c)
		next();
	else
		sys_err("expected %c but got %c\n", c, (char)lookahead);
}


int sys_err(char *s)
{
	fprintf(stderr, "%s", s);
	exit(-1);
}
