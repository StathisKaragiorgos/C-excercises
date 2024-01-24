#include <stdio.h>
int main ()	{
	int a,b,c;
	printf("Doste ena etos");
	scanf(" %d",&a);
	b = a % 100 == 0;
	if (a % 4 == 0)	{
		printf("Disekto Etos");
	}
	else if (b % 400 == 0) {
		printf("disekto episis");
	}
	else {
		printf("kanoniko");
	}
	return 0;
}
