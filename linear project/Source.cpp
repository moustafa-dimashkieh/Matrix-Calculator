#include <iostream>
#include <math.h>
using namespace std;

int determinant(int matrix[10][10], int n);
int main()
{
	cout << "\t\t\t\t\t***** Linear Calculator *****\n\n";
	int choice;
	do
	{
		cout << "1. Matrix Addition\n"
			<< "2. Matrix Subtraction\n"
			<< "3. Matrix Multiplication\n"
			<< "4. Matrix Determinant\n"
			<< "5. Matrix Inverse\n"
			<< "6. Matrix Transpose.\n"
			<< "7. Exit\n"
			<< "Choose from the following menu: ";
		cin >> choice;
		switch (choice)
		{
		case 1: //Addition
		{
			int row, column;
			int i, j;
			int first[10][10], second[10][10], sum[10][10];

			// Number of rows and columns for both matrices must be equal.
			cout << "Enter the number of rows and columns for the 2 matrices:\n";
			cout << "Rows: ";
			cin >> row;
			cout << "Columns: ";
			cin >> column;

			// Creating the entries of the First Matrix.
			cout << "Enter the elements of the first matrix: " << endl;

			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
				{
					cout << "Enter the element a" << i + 1 << j + 1 << ":";
					cin >> first[i][j];
				}

			// Displaying the first matrix.
			cout << "The first matrix is:" << endl;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << first[i][j] << "\t";
				cout << endl;
			}

			// Creating the entries of the Second Matrix.
			cout << "Enter the elements of the second matrix: " << endl;

			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
				{
					cout << "Enter the element b" << i + 1 << j + 1 << ":";
					cin >> second[i][j];
				}

			// Displaying the second matrix.
			cout << "The second matrix is:" << endl;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << second[i][j] << "\t";
				cout << endl;
			}

			// Summation of both matrices.
			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
					sum[i][j] = first[i][j] + second[i][j];

			cout << "The sum of the entered matrices:" << endl;

			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << sum[i][j] << "\t";

				cout << endl;
			}
			break;
		}
		case 2: //Subtraction
		{

			int row, column;
			int i, j;
			int first[10][10], second[10][10], sub[10][10];

			// Number of rows and columns for both matrices must be equal.
			cout << "Enter the number of rows and columns for the 2 matrices:\n";
			cout << "Rows: ";
			cin >> row;
			cout << "Columns: ";
			cin >> column;

			// Creating the entries of the First Matrix.
			cout << "Enter the elements of the first matrix: " << endl;

			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
				{
					cout << "Enter the element a" << i + 1 << j + 1 << ":";
					cin >> first[i][j];
				}

			// Displaying the first matrix.
			cout << "The first matrix is:" << endl;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << first[i][j] << "\t";
				cout << endl;
			}

			// Creating the entries of the Second Matrix.
			cout << "Enter the elements of the second matrix: " << endl;

			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
				{
					cout << "Enter the element b" << i + 1 << j + 1 << ":";
					cin >> second[i][j];
				}

			// Displaying the second matrix.
			cout << "The second matrix is:" << endl;
			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << second[i][j] << "\t";
				cout << endl;
			}

			// Subtraction of both matrices.
			for (i = 0; i < row; i++)
				for (j = 0; j < column; j++)
					sub[i][j] = first[i][j] - second[i][j];

			cout << "The subtraction of the entered matrices:" << endl;

			for (i = 0; i < row; i++)
			{
				for (j = 0; j < column; j++)
					cout << sub[i][j] << "\t";

				cout << endl;
			}
			break;
		}
		case 3: //Multiplication
		{
			int first[10][10], second[10][10], mult[10][10];
			int r1, c1;
			int r2, c2;
			int i, j, k;

			cout << "Enter  the number of rows and columns for first matrix:\n";
			cout << "Rows1: ";
			cin >> r1;
			cout << "Columns1: ";
			cin >> c1;

			cout << "Enter the number of rows and columns for second matrix:\n";
			cout << "Rows2: ";
			cin >> r2;
			cout << "Columns2: ";
			cin >> c2;

			// The number of columns of the first matrix must be equal to the number of rows of the second matrix.
			while (c1 != r2)
			{
				cout << "Error! The number of columns of the first matrix \nis not equal to the number of rows of the second matrix." << endl;

				cout << "Enter  the number of rows and columns for first matrix:\n";
				cout << "Rows1: ";
				cin >> r1;
				cout << "Columns1: ";
				cin >> c1;

				cout << "Enter the number of rows and columns for second matrix:\n";
				cout << "Rows2: ";
				cin >> r2;
				cout << "Columns2: ";
				cin >> c2;
			}

			// Creating the entries of the first matrix.
			cout << endl << "Enter the elements of the first matrix:" << endl;
			for (i = 0; i < r1; ++i)
				for (j = 0; j < c1; ++j)
				{
					cout << "Enter element a" << i + 1 << j + 1 << " : ";
					cin >> first[i][j];
				}

			// Displaying the first matrix.
			cout << "The first matrix is:" << endl;
			for (i = 0; i < r1; i++)
			{
				for (j = 0; j < c1; j++)
					cout << first[i][j] << "\t";
				cout << endl;
			}

			// Creating the entries of the second matrix.
			cout << endl << "Enter the elements of the second matrix:" << endl;
			for (i = 0; i < r2; ++i)
				for (j = 0; j < c2; ++j)
				{
					cout << "Enter element b" << i + 1 << j + 1 << " : ";
					cin >> second[i][j];
				}

			// Displaying the second matrix.
			cout << "The second matrix is:" << endl;
			for (i = 0; i < r2; i++)
			{
				for (j = 0; j < c2; j++)
					cout << second[i][j] << "\t";
				cout << endl;
			}

			// Initializing elements of matrix mult to 0.
			for (i = 0; i < r1; ++i)
				for (j = 0; j < c2; ++j)
				{
					mult[i][j] = 0;
				}

			// Multiplying of both matrices.
			for (i = 0; i < r1; ++i)
				for (j = 0; j < c2; ++j)
					for (k = 0; k < c1; ++k)
					{
						mult[i][j] += first[i][k] * second[k][j];
					}

			// Displaying results.
			cout << endl << "The multiplication of the two matrices:" << endl;
			for (i = 0; i < r1; ++i)
				for (j = 0; j < c2; ++j)
				{
					cout << "\t" << mult[i][j];
					if (j == c2 - 1)
						cout << endl;
				}
			break;
		}
		case 4: //Determinant
		{
			int size;
			int i, j;
			int matrix[10][10];

			// The size of the matrix.
			cout << "Enter the size of the matrix: ";
			cin >> size;

			// Creating the entries of the matrix.
			cout << "Enter the elements of the matrix: " << endl;
			for (i = 0; i < size; i++)
				for (j = 0; j < size; j++)
				{
					cout << "Enter the element a" << i + 1 << j + 1 << ":";
					cin >> matrix[i][j];
				}

			// Displaying the entered matrix.
			cout << "The entered matrix is:" << endl;
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
					cout << matrix[i][j] << " ";
				cout << endl;
			}

			// Displaying the determinant of the entered matrix.
			cout << "Determinant of the matrix is " << determinant(matrix, size) << endl;
			break;
		}
		case 5: //Inverse
		{
			int size;
			int matrix[10][10];
			int i, j;
			

			// The size of the matrix.
			cout << "Enter the size of the matrix: ";
			cin >> size;

			// Creating the entries of the matrix.
			cout << "Enter the elements of the matrix: " << endl;
			for (i = 0; i < size; i++)
				for (j = 0; j < size; j++)
				{
					cout << "Enter the element a" << i + 1 << j + 1 << ":";
					cin >> matrix[i][j];
				}


			//Displaying the matrix.
			cout << endl << "The entered matrix is:";
			for (i = 0; i < size; i++)
			{
				cout << "\n";

				for (j = 0; j < size; j++)
					cout << matrix[i][j] << "\t";
			}

			// Displaying the determinant of the entered matrix.
			cout << endl << "Determinant of the matrix is " << determinant(matrix, size) << endl;

			// Finding the inverse and displaying the results
			cout << "\n\nInverse of the matrix is: \n";
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
					cout << (double)((matrix[(j + 1) % size][(i + 1) % size] * matrix[(j + 2) % size][(i + 2) % size]) - (matrix[(j + 1) % size][(i + 2) % size] * matrix[(j + 2) % size][(i + 1) % size])) / determinant(matrix,size) << "\t";

				cout << endl;
			}
			break;
		}
		case 6: //Transpose
		{
			int matrix[10][10], trans[10][10];
			int row, column;
			int i, j;

			cout << "Enter the number of rows and columns of the matrix:\n";
			cout << "Rows: ";
			cin >> row;
			cout << "Columns: ";
			cin >> column;

			// Creating the entries of the matrix.
			cout << endl << "Enter the elements of the matrix: " << endl;
			for (i = 0; i < row; ++i)
				for (j = 0; j < column; ++j)
				{
					cout << "Enter element a" << i + 1 << j + 1 << ": ";
					cin >> matrix[i][j];
				}

			// Displaying the matrix.
			cout << endl << "The entered Matrix: " << endl;
			for (i = 0; i < row; ++i)
				for (j = 0; j < column; ++j)
				{
					cout << " " << matrix[i][j];
					if (j == column - 1)
						cout << endl << endl;
				}

			// Finding the transpose of the matrix.
			for (i = 0; i < row; ++i)
				for (j = 0; j < column; ++j)
				{
					trans[j][i] = matrix[i][j];
				}

			// Displaying the transpose matrix.
			cout << endl << "The Transpose of the Matrix: " << endl;
			for (i = 0; i < column; ++i)
				for (j = 0; j < row; ++j)
				{
					cout << " " << trans[i][j];
					if (j == row - 1)
						cout << endl << endl;
				}
			break;
		}
		case 7: //Exit
		{
			cout << "Exit Calculator.\n";
			break;
		}
		default:
		{
			cout << "Error! Invalid choice.\n";
			break;
		}
		}
	} while (choice != 7);


	system("pause");
	return 0;
}

// The function to calculate the determinant of the entered matrix.
int determinant(int matrix[10][10], int n)
{
	int det = 0;
	int submatrix[10][10];
	if (n == 2)
		return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
	else
	{
		for (int x = 0; x < n; x++)
		{
			int subi = 0;
			for (int i = 1; i < n; i++)
			{
				int subj = 0;
				for (int j = 0; j < n; j++)
				{
					if (j == x)
						continue;
					submatrix[subi][subj] = matrix[i][j];
					subj++;
				}
				subi++;
			}
			det = det + (pow(-1, x) * matrix[0][x] * determinant(submatrix, n - 1));
		}
	}
	return det;
}