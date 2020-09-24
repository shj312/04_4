#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int result;
	
	printf("input year :");
	scanf("%i", &x);
	
	result = (x%4==0 && x%100!=0)||(x%400==0);
	printf("is it leap year? : %i \n", result);
	return 0;
}
