#include <stdio.h>
#ifndef BUFSIZ
	#define BUFSIZ 50
#endif
#define MACRO_SYMBOL '$'
#define ismacro(x) ((x) == MACRO_SYMBOL)
char word[BUFSIZ];

int main(void)
{
	while (getword() != EOF) {
		if (ismacro(word))
			expand();
	}
}

int getword(void)
{
	/* overflow */
	return scanf("%s", word);
}

void expand(void)
{
	struct nod_t *macp = lookup(word);
	char **output;
	char myword[BUFSIZ];
	strcpy(myword, word);
	int myargc = macp->argc;
	while (myargc > 0) {
		getword();
		argexp(macp, myargc, myword, output);
		myargc--;
	}
