#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Entre un nombre: \n";
	cin >> x;
	cout << "Ton nombre est: " << x << "\n";
	int y, z;
	int somme;
	cout << "Entre un autre nombre: \n";
	cin >> y;
	cout << "Entre encore un autre nombre: \n";
	cin >> z;
	somme = y + z;
	cout << "La somme est: " << somme << "\n";
	return 0;
}