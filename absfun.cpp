#include <stdio.h>
int my_Abs (int a)	{
	if (a<0)
	return a * -1;
	else return a;
}

int main ()	{
	int x, abs;
	printf("Dose enan arithmo:");
	scanf("%d",&x);
	abs=my_Abs(x);
	printf("O absolute arithmos einai: %d",abs);
	return 0;
}

