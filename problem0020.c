//Project Euler problem #0020
//https://projecteuler.net/problem=20

//Factorial digit sum
//n! means n × (n − 1) × ... × 3 × 2 × 1

//For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
//and the sum of the digits in the number 10! is 
//3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

//Find the sum of the digits in the number 100!



#include <stdio.h>
int main(void){
	int multi = 1;
	int int_input;
	int answer = 1;
	fputs("What do you want to factorialize? ", stdout);
	scanf("%d", &int_input);
	for(multi=2; multi<=int_input; multi++){
		answer = answer * multi;
	}
	printf("%d\n", answer);
	return 0;
}