#include <stdio.h>
int main() {

	printf("d:%d", 19);
	printf("f:%f", 19.77);
	printf("s:%s", "hello");
	printf("c:%c\r\n", 'c');

	//������Ů���ѵ������ǣ�Сʫʫ���Ա�Ů�����䣺18�ꡣ���ߣ�1��82�����أ�110�
	printf("������Ů���ѵ������ǣ�%s\n���Ա�%s\n�����䣺%d��\n�����ߣ�%f\n�����أ�%d�", "aaa", "a", 12, 1.4, 11);


	int a;
	a = 10;
	printf("%d\r\n", a);

	int b = 10;

	b = b + b;

	printf("%d", a + b);



	return 0;
}