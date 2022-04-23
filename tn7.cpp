#include <iostream>

void rotate (int** matrix, int size)
{
	int i = 0, j = size - 1;

std::cout << std::endl;

	while(j >= 0)
	{
		while(i < size)
		{
			std::cout << "\t" << matrix[i][j] << "\t";
			++i;
		}
		std::cout << std::endl;
		--j;
		i = 0;
	}

std::cout << std::endl;
}

void deleteMatrix (int** matrix, int size)
{
	for(int i = 0; i < size; ++i)
	 {
		delete [] matrix[i];
	 }
	delete [] matrix;
	matrix = nullptr;
	return;
}

int main ()
{
int size = 0;
std::cout << "Enter the size of the matrix: ";
std::cin >> size;

int** matrix = new int*[size];

	for(int i = 0; i < size; ++i)
	 {
 		matrix[i] = new int [size];
		
		for(int j = 0; j < size; ++j)
		 {
			std::cout << "Enter the element under the index of [" << i << "] [" << j << "]: ";
			std::cin >> matrix[i][j];
		 }
	 } 
rotate(matrix, size);
deleteMatrix(matrix, size);

return 0;
}
