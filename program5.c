/*
 5.	 #include<stdio.h>
	 void main(){
		int x=10;
		int *ptr=&x;
		char *cptr=&x;	
		printf(ā%d\nā,*ptr);
		printf(ā%d\nā,cptr);

		}
*/

#include<stdio.h>
void main(){
	int x=10;
	int *iptr=&x;
	char *cptr=&x;
	printf("%d\n",*iptr);
	printf("%d\n",cptr);



}

