#include<stdio.h>

void fizz(int i){			/*Fizzを出力*/
	if (i % 3 == 0){
		printf("Fizz\n");
	}
}

void buzz(int i){			/*Buzzを出力*/
	if (i % 5 == 0){
		printf("Buzz\n");
	}
}

void fizzbuzz(int i){		/*FizzBuzzを出力*/
	if (i % 15 == 0){
		printf("FizzBuzz\n");
	}
}

void number(int i){			/*数字を表示*/
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