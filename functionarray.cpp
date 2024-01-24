#include <stdio.h>
void printArray(int arr[], int size) {
	int i;
	for (i=0 ; i<=size-1 ; i++) {
	arr[i]*=2;
	printf(" %d\n",arr[i]);
	}
}
int main () {
	int arr[5]= {2,7,66,4,2},sin;
	int size = sizeof(arr)/sizeof(arr[0]);
	printArray (arr,5);
	return 0;
}
