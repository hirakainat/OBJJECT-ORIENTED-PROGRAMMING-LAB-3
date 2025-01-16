


#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void display_ids_count(int** buisness, int r, int c) {

	int** business = new int* [r];
	for (int i = 0; i < r; i++)
	{
		business[i] = new int[c];
	}
	cout << "enter the ids of the products" << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> business[i][j];
		}
	}
	int targeted_id;

	int num_of_products;
	cout << "enter the numbers of the products of which the id_s you have to enter" << endl;
	cin >> num_of_products;
	for (int i = 0; i < num_of_products; i++) {
		cout << "enter the id of which you wants to see the count how many a times a compant wants tu but that prouct" << endl;
		cin >> targeted_id;
		int count = 0;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (business[i][j] == targeted_id) {
					count++;
				}
			}
		}

		cout << "the count of the targeted id" << targeted_id << "is" << endl;
		cout << count << endl;
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
	int** inventory = new int* [r];
	for (int i = 0; i < r; i++)
	{
		inventory[i] = new int[c];
	}
	display_ids_count(inventory, r, c);
	system("pause");
	return 0;
}
