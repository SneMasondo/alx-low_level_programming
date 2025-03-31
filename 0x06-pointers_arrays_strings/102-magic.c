#include <stdio.h>

int main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	int *p;

	p = a;

	/* print the first element of the array */
	printf("%d\n", *p);
	p++;

	/* print the second element of the array */
	printf("%d\n", *p);
	p++;

	/* print the third element of the array */
	printf("%d\n", *p);
	p++;

	/* print the fourth element of the array */
	printf("%d\n", *p);
	p++;

	/* print the fifth element of the array */
	printf("%d\n", *p);

	/* Line 19: add this line */
	*(p - 2) = 98;

	return (0);
}
