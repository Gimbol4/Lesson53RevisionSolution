// Task 06 [The sum III]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чётных чисел от 1 до N.

#include "logic.h"

int recursion(int number) {
	if (number < 2)
		return 0;
	if (number % 2 == 0) {
		return number + recursion(number - 2);
	}

	else {
		return recursion(number - 1);
	}
}

int sum(int number) {
	if (number < 0) {
		return -1;
	}
	return recursion(number);
}

