#include <stdio.h>
int binSearch(int array[], int start, int end, int element){
	if(end<start) return -1;

	int middle = (start+end)/2;

	if(array[middle] == element)
		return middle;

	if(array[middle]<element)
		return binSearch(array, start, middle, element);
	else
		return binSearch(array, middle+1, end, element);
}

int main(){
	int array[] = {1,4,7,9,16,56,70};
	int n=7;
	int element = 9;
	int index =  binSearch(array, 0, n-1, element);
	if(index == -1)
		printf("element not found!\n");
	else
		printf("element found at index %d\n", index);
}