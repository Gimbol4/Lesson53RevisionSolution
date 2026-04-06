// Task 01 [The sum I]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от 1 до N.

#include "logic.h"

// f(1...5) --> 1 + f(2..5)

int recursion(int number) {
	if (number == 1) {
		return 1;
	}

	return recursion(number - 1) + number;
}
int sum(int number) {
	if (number < 1) {
		return -1;
	}
	return recursion(number);
}
