#include <stdio.h>
 
 
/*void fun1(int i) {
	for (i = 0; i < 5; i++) {
		printf("The function is operation properly. %d\n", i);
	}
}*/
 
void fun2(char name[50]) {
	printf("%s", name);
}
 
/*int fun3(int num) {
	return num * 7;
}*/
 
int main()
{
	int i, num;
	char name[50];
	/*printf("Give me a number: ");
	scanf_s("%d", &i);
	fun1(i);*/
	printf("Give me a name: ");
	scanf("%s", &name);
	fun2(name);
	//scanf_s("%d", &num);
	//printf("The result of %d multipied by 7 is %d", num, fun3(num));
	return 0;
}