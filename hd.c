/* Print the input to output, but with ASCII values beneath each character. */

#define MAXLINE	500

#include <stdio.h>

int get_line(char [], int);

int main(void) {

	int c;
	int i;
	int len;
	char line [MAXLINE];

	while ((len = get_line(line, MAXLINE)) > 0) {

		/* Print characters. */
		for (i=0; i<len; ++i) {
			if (line[i] == '\n')
				printf(" \\n");
			else if (line[i] == '\t')
				printf(" \\t");
			else
			printf("%3c", line[i]);
		}	
		printf("\n");

		/* Print ASCII values of characters. */
		for (i=0; i<len; ++i)
			printf("%3x", line[i]);
		printf("\n");
	}

	return 0;
}

int get_line(char s[], int lim) {

	int c, i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
		s[i] = c; 
	if (c == '\n') {
		s[i] = c;
		++i;
	} 
	return i;
}

