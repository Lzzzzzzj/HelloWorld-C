#include<stdint.h>

int main2() {

	int a_c = 12;

	int a = 15, b = 7, c;
	c = a / b + 0.8;
	printf("%d\n", c);


	int a1 = 0, b1 = 4, c1 = 6;
	int result1 = (a1 && b1) == (b1 || c1);
	printf("%d\n",result1);

	printf("%d\n", a_c);

	int n = 2;
	printf("%d", n += n -= n * n);

	return 0;
}