/*
 
   3. WAP to add two different arrays of the same size
	Take array size and array elements from the user
	IP : enter 1st array : 10 12 13 15
	Ip : enter 2nd array: 1 2 3 4
	Op: 11 14 16 19
*/

#include<stdio.h>
void main(){
	int size,sum;
	printf("Enter array size:\n");
	scanf("%d",&size);
	int arr1[size],arr2[size];

	printf("Enter first array element: \n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter second  array element: \n");
        for(int i=0; i<size; i++){
                scanf("%d",&arr2[i]);
		
        }
	printf("sum of two array of their element:\n");
	for(int i=0; i<size; i++){
		sum=arr1[i]+arr2[i];
		printf("%d\n",sum);
	}
	
}



