#include <iostream>
using namespace std;

typedef int eur;
typedef int usd;

eur eurKupovni = 117;
eur eurProdajni = 118;

usd usdKupovni = 103;
usd usdProdajni = 104;

int main() {
	int opcija;
	int drugaOpcija;
	int iznos;

	do {
		cout << "Welcome to Exchange Office" << endl;
		cout << "1. Buy " << endl;
		cout << "2. Sell" << endl;
		cout << "3. Exit" << endl;
		cin >> opcija;

		system("cls");

		switch (opcija)
		{
		case 1:
			cout << "1. EUR" << endl;
			cout << "2. USD" << endl;
			cin >> drugaOpcija;
			system("cls");

			cout << "Enter value: " << endl;
			cin >> iznos;

			if (drugaOpcija == 1)
				cout << "Your bill is " << (iznos * eurKupovni) << " rsd" << endl;
			else if (drugaOpcija == 2)
				cout << "Your bill is " << (iznos * usdKupovni) << " rsd" << endl;
			else
				cout << "Option is not defined" << endl;
			break;

		case 2:
			cout << "1. EUR" << endl;
			cout << "2. USD" << endl;
			cin >> drugaOpcija;

			system("cls");

			cout << "Enter value: " << endl;
			cin >> iznos;

			if (drugaOpcija == 1)
				cout << "Your bill is " << (iznos * eurProdajni) << " rsd" << endl;
			else if (drugaOpcija == 2)
				cout << "Your bill is " << (iznos * usdProdajni) << " rsd" << endl;
			else
				cout << "Option is not defined" << endl;
			break;
			
		case 3:
			cout << "Thank you for using our services" << endl;
			system("cls");
			break;

		default:
			cout << "Option is not defined" << endl;
		}
		cout << endl;
	} while (opcija != 3);

	return 0;
}