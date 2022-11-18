#include "func.hpp"

namespace lab {
	int Min(int matrix[100][100], int n) {
		int min = 10000000;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (matrix[i][j] < min)
					min = matrix[i][j];
		return min;
	}


	int Max(int matrix[100][100], int n) {
		int max = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (matrix[i][j] > max)
					max = matrix[i][j];
		return max;
	}

	int sum(int n) {
		int sum = 0;
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		return sum;
	}

	bool compare(int a, int b) {
		bool flag = false;
		if (a == b) {
			flag = true;
		}
		return flag;
	}

	int sumstr(int str[100], int n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += str[i];
		}
		return sum;
	}

	/*
	void sort(int matrix[100][100], int n) {
		for (int i = 0; i < n - 1; i++)
			for (int j = i; j < n; j++)
				if (sumstr(matrix[i], n) > sumstr(matrix[j], n))
				{
					int p[100] = matrix[i];
					matrix[i] = matrix[j];
					matrix[j] = p;
				}
		//return matrix[100][100];
	}
	*/
}