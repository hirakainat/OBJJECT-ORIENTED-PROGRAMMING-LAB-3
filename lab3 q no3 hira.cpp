#include<iostream>
using namespace std;
void display_multiply(int** m1,int** m2, int r1, int c1,int r2,int c2){
	if (c1 == r2){
		m1 = new int*[r1];
		for (int i = 0; i < r1; i++)
		{
			m1[i] = new int[c1];
		}
		m2 = new int*[r2];
		for (int i = 0; i < r2; i++)
		{
			m2[i] = new int[c2];
		}
		cout << "enter the matrix 1" << endl;
		for (int i = 0; i < r1; i++){
			for (int j = 0; j < c1; j++){
				cin >> m1[i][j];
			}
		}
		cout << "enter the matrix 2" << endl;
		for (int i = 0; i < r2; i++){
			for (int j = 0; j < c2; j++){
				cin >> m2[i][j];
			}
		}
		int** resultant = new int*[r1];
		for (int i = 0; i < r1; i++){
			resultant[i] = new int[c2];
		}
		for (int i = 0; i < r1; ++i){
			for (int j = 0; j < c2; ++j){
				for (int k = 0; k < c1; ++k)
				{
					resultant[i][j] += m1[i][k] * m2[k][j];
				}
			}
		}
		for (int i = 0; i < r1; ++i){
			for (int j = 0; j < c2; ++j)
			{
				cout << " " << resultant[i][j];

			}
		}
	}
	else{
		cout << "the multplication is not possible" << endl;
	}
}
int main()
{
	int r1 = 0;
	int c1 = 0;
	int r2 = 0, c2 = 0;
	cout << ("enter the number of rows for matrix1 :") << endl;
	cin >> r1;
	cout << ("enter the number of columns for matrix 1:") << endl;
	cin >> c1;
	cout << ("enter the number of rows for matrix2 :") << endl;
	cin >> r2;
	cout << ("enter the number of columns for matrix 2:") << endl;
	cin >> c2;
	int ** matrix1 = new int*[r1];
	for (int i = 0; i < r1; i++)
	{
		matrix1[i] = new int[c1];
	}
	int ** matrix2 = new int*[r2];
	for (int i = 0; i < r1; i++)
	{
		matrix2[i] = new int[c2];
	}
	display_multiply(matrix1, matrix2,  r1,  c1,  r2,  c2);

	system("pause");
	return 0;
}