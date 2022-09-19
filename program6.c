
/*
 	6. WAP to swap values of two numbers using a pointer.
		(Hint: Use de-referencing of pointers)
		Input : x=10y=20
		Op: After swapping
		x=20
		y=10
		Write output & draw a good diagram for the code.
*/

#include<stdio.h>
void main(){
	int z, x=10;
	int y=20;
	int *iptr1=&x;
	int *iptr2=&y;
	z=x;
	*iptr1=y;
	*iptr2=z;

	printf("After swapping: \n");

	printf("%d\n",*iptr1);
	printf("%d\n",*iptr2);

}
