#include <iostream>

void makingnull (int** matrix, int sight, int lign)
{
	for(int i = 0; i < lign; ++i)
	{
		for(int j = 0; j < sight; ++j)
		{
			if(matrix[i][j] == 0)
			{
               		 for(int a = 0, b = 0; a < lign, b < sight; a++, b++)
                	 {
                    		matrix[a][j] = 0;
                    		matrix[i][b] = 0;
				
                	 }
			   goto label;
			}
				
		}
	}

label:	for(int m = 0; m < lign; ++m)
	{
		for(int n = 0; n < sight; ++n)
		{
			std::cout << "\t" << matrix[m][n] << "\t";
		}
		std::cout << std::endl;
	}
}
void Delete (int** matrix, int sight, int lign) 
{

	for(int i = 0; i < lign; i++)
	 {
		delete [] matrix[i];
	 }

	delete [] matrix;
	matrix = nullptr;
	return;
}

int main ()
{
int sight = 0;
int lign = 0;

	std::cout << "Enter the sight of the matrix: ";
	std::cin >> sight;
	std::cout << "Enter the lign of the matrix: ";
	std::cin >> lign;

int** matrix = new int* [lign];

	for(int i = 0; i < lign; i++)
	 {
 		matrix[i] = new int [sight];
		for(int j = 0; j < sight; j++)
		 {
			std::cout << "Enter the sight and lign of the matrix [" << i << "] [" << j << "]: ";
			std::cin >> matrix[i][j];
		 }
	 }
makingnull(matrix, sight, lign);
Delete(matrix, sight, lign);

return 0;
}

