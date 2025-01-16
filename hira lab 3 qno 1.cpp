#include<iostream>
#include<cstring>
#include<string>

using namespace std;
void CLASS(char**class_MS, int r, int c)
{
	class_MS = new char*[r];
	for (int i = 0; i < r; i++)
	{
		class_MS[i] = new char[c];
	}
	cout << ("enter the 2d array:") << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> class_MS[i][j];
		}
	}
	char a;
	cout << ("enter the character you want to find:") << endl;
	(cin >> a);
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (class_MS[i][j] == a)
			{

				cout << ("The row of the specified character is :") << r << ("The column of the specified character is :") << c << endl;
			}

		}
	}

}

int main()
{
	int r = 0;
	int c = 0;
	cout << ("enter the number of rows:") << endl;
	cin >> r;
	cout << ("enter the number of columns:") << endl;
	cin >> c;
	char ** seating_arrangement = new char*[r];
	for (int i = 0; i < r; i++)
	{
		seating_arrangement[i] = new char[c];
	}
	
	CLASS(seating_arrangement, r, c);











	system("pause");
	return 0;
}