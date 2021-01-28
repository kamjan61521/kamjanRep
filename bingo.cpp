#include<iostream>
#include<ctime>

using namespace std; 

int main()

{
	srand(time(NULL));
	int losowa, liczba;
	cout << "Zgadnij liczbe: ";
	cin >> liczba;

	losowa = 1 + rand() % 10;

	if (losowa == liczba)
	{
	
		cout << "Bingo, zgadles!";
		system("pause");
		system("cls");
	}

	else
	{
		cout << "Nie zgadles! Wylosowana liczba to: " << losowa << endl;
		system("pause");
		system("cls");
	}

	system("pause");

	return 0;
}