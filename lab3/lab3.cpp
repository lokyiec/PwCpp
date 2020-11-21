#include <iostream>
#include <math.h>

using namespace std;

float potega(float a, int b) {
    int j;
    float x = 1;

    for (j = 0; j < b; j++) {
        x *= a;
    }

    return x;
}

int suma(int num) { 
    if (num == 1) {
        return 1; 
    } else {
        return suma(num - 1) + num;
    } 
}

int fib1(int n) {
    int a = 0, b = 1, c, i;
    if ( n == 0) return a;

    for (i = 2; i <= n; i++) {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}

int fib2(int n) {
   if (n <= 1)  return n;
   return fib2(n-1) + fib2(n-2);
}

int factorial(int n) {
    if (n > 1)  return n * factorial(n - 1);
    else    return 1;
}

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
        case 1: {
            cout << "\n*********************************\n"
                    "*********** zadanie 1 ***********\n"
                    "*********************************\n\n";

            float y1;
            int y2;

            cout << "Podaj dwie liczby:\n"; cin >> y1 >> y2;
            cout << "\n" << y1 << " do potegi " << y2 << " = " << potega(y1, y2) << "\n\n";
            cout << y1 << " + " << y2 << " = " << y1 + y2 << "\n\n";

            int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
            
            for (int j = 0; j < sizeof(tab) / sizeof(tab[0]); ++j) {
                cout << tab[j] << endl;
            }

            int x;
            cout << "Podaj liczbe: "; cin >> x;
            cout << "Suma(" << x << ") = " << suma(x) << "\n\n";

            break;
        }

        case 2:
            cout << "\n*********************************\n"
                    "*********** zadanie 2 ***********\n"
                    "*********************************\n\n";

            int zad2;

            cout << "Podaj nr wyrazu ciągu fibbonaciego: ";  cin >> zad2;
            cout << "\nWyraz: " << zad2 << " ciagu fibbonaciego to: " << fib1(zad2) << "\n\n";

            break;

        case 3:
            cout << "\n*********************************\n"
                    "*********** zadanie 3 ***********\n"
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

        case 4:
            cout << "\n*********************************\n"
                    "*********** zadanie 4 ***********\n"
                    "*********************************\n\n";

            int zad4;

            cout << "Podaj nr wyrazu ciągu fibbonaciego rekurencyjnie: ";  cin >> zad4;
            cout << "\nWyraz: " << zad4 << " ciagu fibbonaciego to: " << fib2(zad4) << "\n\n";

            break;

        case 5:
            cout << "\n*********************************\n"
                    "*********** zadanie 5 ***********\n"
                    "*********************************\n\n";

            int zad5;

            cout << "Podaj liczbe naturalna: ";  cin >> zad5;
            cout << "\nSilnia rekurencyjnie dla " << zad5 << "! = " << factorial(zad5) << "\n\n";

            break;


        case 6:
            return 0;

        default:
            cout << "Wybor musi byc z przedzialu 1-6\n\n";
            break;
    }

}
