#include <iostream>
#include "func.hpp"
#include <fstream> // работа с файлами

/*
2
10 9
90 15
*/

std::ifstream file("file.txt"); // открыли файл для чтения
void read(int matrix[100][100], int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			file >> matrix[i][j];
}

void sort(int matrix[100][100], int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++)
			if (lab::sumstr(matrix[i], n) > lab::sumstr(matrix[j], n))
				std::swap(matrix[i], matrix[j]);
}

void write(int matrix[100][100], int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы

	int matrix[100][100];
	int n;
	file >> n;
	read(matrix, n);
	
	if (lab::compare(lab::sum(lab::Min(matrix, n)),
					 lab::sum(lab::Max(matrix, n))) == true)
	{
		sort(matrix, n);
	}

	write(matrix, n);
}

// Дана целочисленная матрица {Aij}i=1...n;j=1..n , n<=100. 
//Если суммы цифр минимального и максимального элементов матрицы одинаковы, упорядочить строки матрицы по возрастанию суммы элементов.

//1. Функция чтения
//2. Функция обработки(может быть несколько)
//3. Функция записи

