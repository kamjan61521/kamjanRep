#include<iostream>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<cstdlib>

using namespace std;

int main()

{
	int a;
	cout << "Podaj liczbe: " << endl;
	cin >> a;
	cout << "Wybrana liczba w systemie dziesietnym to: " << a << endl;
	cout.setf(ios::hex, ios::basefield);
	cout << "Wybrana liczba w systemie szesnatkowym to: " << a << endl;
	cout.setf(ios::oct, ios::basefield);
	cout << "Wybrana liczba w systemie osemkowym to: " << a << endl; 
	system("pause"); 

	return 0;
}