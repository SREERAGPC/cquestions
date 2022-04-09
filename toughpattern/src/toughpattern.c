/*
 ============================================================================
 Name        : toughpattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,col,space,limit=7;
	for(row=5;row>=1;row--){
		for(col=5;col>=row;col--){
		printf("%d",col);
		}for(
				space=1;space<=limit;space++){
			printf("%d",row);

		}for(col=row;col<=5;col++){
			printf("%d",col);
			}
		limit=limit-2;
		printf("\n");

	}
	for(row=5;row>=1;row--){
		for(col=5;col>=row;col--){
		printf("%d",col);
		}for(
				space=1;space<=limit;space++){
			printf("%d",row);

		}for(col=row;col<=5;col++){
			printf("%d",col);
			}
		limit=limit-2;
		printf("\n");

	}
	return EXIT_SUCCESS;
}
