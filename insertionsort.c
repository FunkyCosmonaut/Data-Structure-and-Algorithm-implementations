#include <stdio.h>
#include <stdlib.h>

void insertionsort(int *arr, int size){

	int i;
	int j;
	int key;

	for(j = 1; j != size; j++){
		int key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i]>key){
			arr[i + 1] = arr[i];
			i = i -1;
		}
		arr[i + 1] = key;
	}
}
void printarray(int *arr, int size){

	int i;
	for(i = 0; i < size; i++){
		printf("%i ", arr[i]);
	}
}

int main(){
	
	void printarray(int *arr, int size);	
	void insertionsort(int *arr, int size);	

	int i = 0;
	
	int arr_sz;
	
	printf("\nEnter how many ints you wanna sort: ");
	scanf("%i", &arr_sz);
	if(arr_sz < 0 || arr_sz > sizeof(int)){
		printf("You dingus, too many elements or you entered a negative\n"
				"quit trying to segfault my shit, exiting\n");
		exit(0);
	}


	int myarray[arr_sz];
	
	printf("Enter a sequence of numbers %i ints:\n", arr_sz);
	while(i < arr_sz){
		scanf("%i", &myarray[i]);
			i++;
	}
	

	insertionsort(myarray, arr_sz);
	printarray(myarray, arr_sz);

	return 0;
}
