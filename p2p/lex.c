
tok_t lex(void)
{
	char buf[MAXBUF];
	int i = 0;
	while (i < MAXBUF) {
		buf[i] = getchar();
