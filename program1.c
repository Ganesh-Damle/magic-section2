
/*
 	1. WAP to find the given element from the array
		Take array size and array elements from the user
		IP : enter array : 10 12 13 15 16 14
		Ip : enter element : 15
		Op: 15 is present
*/


#include<stdio.h>
void main(){
	int size,search,flag=0;
	printf("Enter size of array: \n");
	scanf("%d",&size);

	int arr[size];
	
	printf("Enter array element:\n");
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter search element:\n");
	scanf("%d",&search);
	for(int i=0; i<size; i++){
		if(search==arr[i]){
			flag=1;
			break;
		}
	}

	 if(flag==1){
                     printf("%d is present \n",search);
	 }
	 else {
                        printf("%d is not present \n",search);
                }

}

