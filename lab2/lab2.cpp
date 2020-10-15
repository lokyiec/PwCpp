#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int choice;

    cout << "\nWybierz jedna z ponizszych opcji:\n";
    cout << "1: zadanie 1\n"
            "2: zadanie 2\n"
            "3: zadanie 3\n"
            "4: zadanie 4\n"
            "5: zadanie 5\n"
            "6: Wyjscie\n";

    cout << "Wybrana opcja: "; cin >> choice;

	switch (choice) {
		case 1:
			cout << "\n*********************************\n"
					"*********** zadanie 1 ***********\n"
					"*********************************\n\n";

			break;

		case 2: {
			cout << "\n*********************************\n"
					"*********** zadanie 2 ***********\n"
					"*********************************\n\n";

			for(int i = 0; i <= 10; i++) {
				cout << i << "\n";
			}

			int j = 0;
			cout << "\n";

			while( j <= 10) {
				cout << j << "\n";
				j++;
			}

			cout << "\n";
			int k = 0;

			do {
				cout << k << "\n";
				k++;
			} while(k <= 10);

			cout << "\n";

			for(int ii = 10; ii >= 0; ii--) {
				cout << ii << "\n";
			}

			int jj = 10;
			cout << "\n";

			while( jj >= 0){
				cout << jj << "\n";
				jj--;
			}

			cout << "\n";
			int kk = 10;
			do {
				cout << kk << "\n";
				kk--;
			} while(kk >= 0);

			break;
		}

		case 3: {
			cout << "\n*********************************\n"
					"*********** zadanie 3 ***********\n"
					"*********************************\n\n";

			int tab[11][11];

			for (int i = 1; i < 11; i++) {
				for (int j = 1; j < 11; j++) {
					tab[i][j] = i * j;
				}
				cout << "\n";
			}

			cout << "Tabliczka mnozenia"<<"\n\n";

			for (int i = 1; i < 11; i++) {
				for (int j = 1; j < 11; j++) {
					cout << tab[i][j] << "\t";
				}
				cout << "\n";
			}

			break;
		}

		case 4: {
			cout << "\n*********************************\n"
					"*********** zadanie 4 ***********\n"
					"*********************************\n\n";

			int fibo[10];
			fibo[0] = 0;
			fibo[1] = 1;
			for(int i = 2; i < 10; i++) {
				fibo[i] = fibo[i-1] + fibo[i-2];
			}

			for (int j = 0; j < 10; j++) {
				cout << fibo[j] << "\n";
			}

			break;
		}

		case 5: {
			cout << "\n*********************************\n"
					"*********** zadanie 5 ***********\n"
					"*********************************\n\n";

			double x1, x2;
			int operation;

			cout << "Podaj dwie liczby:\n";
			cout << "a = "; cin >> x1;
			cout << "b = "; cin >> x2;
			cout << "Jakie dzialanie chcesz wykonac: 1 - suma, 2 - roznica, 3 - iloczyn, 4 - iloraz\n"; cin >> operation;

			switch (operation) {
				case 1:
					cout << x1 << " + " << x2 << " = " << x1 + x2 << "\n";
					break;

				case 2:
					cout << x1 << " - " << x2 << " = " << x1 - x2 << "\n";
					break;

				case 3:
					cout << x1 << " * " << x2 << " = " << x1 * x2 << "\n";
					break;

				case 4:
					cout << x1 << " / " << x2 << " = " << x1 / x2 << "\n";
					break;

				default:
					cout << "Nie wybrano poprawnego dzialania!";
					break;
			}

			break;
		}

		case 6:
			return 0;

		default:
			cout << "Wybor musi byc z przedzialu 1-6\n\n";
			break;

	}

	return 0;
}
