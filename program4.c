/*
4. WAP to the array elements in reverse order
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Op: 14 16 15 13 12 10
*/

#include<stdio.h>
void main(){
	int size;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int arr1[size];

	printf("Enter first array element: \n");
	for(int i=1; i<=size; i++){
		scanf("%d",&arr1[i]);
	}
	printf(" array elements are: \n");
        for(int i=size; i>=1; i--){
                printf("%d\n",arr1[i]);
		
        }
	
	
}



