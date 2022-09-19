/*
 	2.WAP to calculate the count of even and odd elements
		Take array size and array elements from the user
		IP : enter array : 10 12 13 15 16 17 19 20 22 23
		OP: even element count is
		OP: odd element count is
*/


#include<stdio.h>
void main(){
	int size;
	printf("Enter array size: \n");
	scanf("%d",&size);

	int arr[size],count=0,count1=0;
	printf("Enter array element: \n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			count++;
		}
		else{
			count1++;
		}
	}
	printf("Even element count is: %d\n",count);
	printf("Odd element count is : %d\n",count1);
}

