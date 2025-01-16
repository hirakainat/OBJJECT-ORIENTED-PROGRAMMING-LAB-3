#include<iostream>
using namespace std;
void display_transpose(int** matrix, int r, int c){
	matrix = new int*[r];
	for (int i = 0; i < r; i++)
	{
		matrix[i] = new int[c];
	}
	cout << "enter the matrix 1" << endl;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> matrix[i][j];
		}
	}
	int** transpose = new int*[r];
	for (int i = 0; i < r; i++)
	{
		transpose[i] = new int[c];
	}
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			transpose[i][j] = matrix[j][i];
		}
	}
	cout << "the transpose of the mtrix is" << endl;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cout << transpose[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	int r = 0, c = 0;
	cout << ("enter the number of rows for matrix :") << endl;
	cin >> r;
	cout << ("enter the number of columns for matrix :") << endl;
	cin >> c;
	int ** matrix1 = new int*[r];
	for (int i = 0; i < r; i++)
	{
		matrix1[i] = new int[c];
	}
	display_transpose(matrix1, r, c);
	system("pause");
	return 0;
}
