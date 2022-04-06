/*
 ============================================================================
 Name        : TESTING.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,row,col,limit,temp;
	setbuf(stdout,NULL);
	printf("enter the size of the array");
	scanf("%d",&limit);
	for(row=1;row<=limit;row++){
		for(col=1;col<=col*2;col++){
			printf("*");

		}printf("\n");
		for(col=1;col<=col*3;col++){
					printf("*");
		}
	}printf("\n");


	return EXIT_SUCCESS;
}
