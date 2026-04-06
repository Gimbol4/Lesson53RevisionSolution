// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"
int recursion(int n, int m) {
	if (n == m) {
		return n;
	}
	return recursion(n, m - 1) + m;
}


int sum(int n, int m) {
	if (n > m) {
		return recursion(m, n);
	}

	return recursion(n, m);
}