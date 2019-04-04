#include<stdio.h>

void fizz(int i){			/*Fizz���o��*/
	if (i % 3 == 0){
		printf("Fizz\n");
	}
}

void buzz(int i){			/*Buzz���o��*/
	if (i % 5 == 0){
		printf("Buzz\n");
	}
}

void fizzbuzz(int i){		/*FizzBuzz���o��*/
	if (i % 15 == 0){
		printf("FizzBuzz\n");
	}
}

void number(int i){			/*������\��*/
	if (i % 3 != 0 && i % 5 != 0){
		printf("%d\n", i);
	}
}

int main(void){
	for (int i=1 ;i <= 100;i++){
		fizzbuzz(i);
		fizz(i);
		buzz(i);
		number(i);
	}
	return 0;
}