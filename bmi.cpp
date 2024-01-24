#include <stdio.h>
int main ()	{
	float h,w,bmi;
	printf ("To varos sas : ");
	scanf (" %f",&w);
	printf("To ipsos sas : ");
	scanf(" %f",&h);
	bmi = w / (h*h);
	if (bmi <= 18.5)	{
		printf("ELEIPOVARIS: %f",bmi);
	}
	else if ((18.5<bmi) && (bmi<=25.0)){
		printf("KANONIKO VAROS: %f",bmi);
	}
	else if ((25.0<bmi) &&(bmi<=30.0)) {
		printf("IPERVAROS: %f",bmi);
	}
	else printf("PAXISARKOS");
	return 0;
}
