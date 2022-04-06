/*
 ============================================================================
 Name        : v.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,col,space;
	for(row=1;row<=11;row++){
		for(space=1;space<=row;space++){
			printf(" ");

		}printf("*");

		for(space=11;space>=row;space--){
			printf("  ");
		}printf("*\n");

	}printf("             *");
	return EXIT_SUCCESS;
}
for(col=5;col<=row;col--){
			printf("%d",col);
		}for(space=5;space>=row;space--){
			printf("%d",row);
