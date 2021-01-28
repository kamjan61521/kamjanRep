#include<iostream>
#include<math.h>

using namespace std; 

int main()

{
	float waga, wzrost, BMI;
	cout << "Witaj w kalkulatorze BMI!" << endl;
	cout << "Wprowadz swoj wzrost w m: " << endl; 
	cin >> wzrost;
	cout << "Wprowadz swoja wage w kg: " << endl;
	cin >> waga;
	BMI = waga / pow(wzrost, 2);
	cout << "Twoje BMI wynosi: " << BMI << endl;
	cout << "Zakres wartosci BMI to: \n BMI < 18,5 to niedowaga\n BMI wynoszace od 18,5 do 24,99 jest prawidlowe\n BMI wynoszace powyzej 25 oznacza juz nadwage" << endl;

	system("pause");

	return 0;
}