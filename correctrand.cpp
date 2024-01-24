#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[10], i;
    float mo;
    int sum =0;
    int min=100;
    int max=0;
    
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Populate the array with 100 random integers between 1 and 100
    for (i = 0; i < 10; i++) {
        array[i] = 1 + (rand() % 100);
    }
    for (i = 0; i<10; i++) {
    	sum+=array[i];
    	printf("Array value:%d\n",array[i]);
	}
	printf("Sum:%d\n",sum);
    mo =sum/10.0;
    printf("Average:%f\n",mo);
    
    
    for (i=0 ; i<10 ; i++) {
    	if (array[i]<min){
    		min=array[i];
		}
		if (array[i]>max) {
			max=array[i];
		}
	}
	printf("Minimum value:%d\n",min);
	printf("Maximum value:%d\n",max);

    return 0;
}

