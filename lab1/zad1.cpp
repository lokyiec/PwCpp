#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int choice;
    bool menu = true;

    cout << "\nWybierz jedna z ponizszych opcji:\n";
    cout << "1: zadanie 1\n"
            "2: zadanie 2\n"
            "3: zadanie 3\n"
            "4: zadanie 4\n"
            "5: Wyjscie\n";

    cout << "Wybrana opcja (1, 2, 3 lub 4): ";
    cin >> choice;

    if (menu) {

        switch (choice) {
            case 1:
                cout << "\n*********************************\n"
                        "*********** zadanie 1 ***********\n"
                        "*********************************\n\n";

                // wypisywanie Hello World!
                cout << "Hello, World!" << endl;

                cout << "Hello, World!" << endl;
                cout << "I love programming!" << endl;

                int myVariable;
                myVariable = 10;
                cout << myVariable;

                if (10 > 5) {
                    cout << "Warunek jest prawdziwy" << endl;
                }

                int num;
                num = 20;
                if (num > 5) {
                    cout << "Wiecej niz 5\n";
                    if (num <= 45) {
                        cout << "Wartosc z przedzialu (5; 45]\n";
                    }
                }

                num = 12;
                if (num == 5)   cout << "Numerem jest 5";
                else
                    if (num == 10)  cout << "Numerem jest 10";
                    else    cout << "Numerem nie jest 5 ani 10\n";


                break;

            case 2:
                cout << "\n*********************************\n"
                        "*********** zadanie 2 ***********\n"
                        "*********************************\n\n";

                double x;
                double y;
                double sum;
                x = 5;
                y = 2;
                sum = x + y;
                cout << sum << "\n";
                sum = x - y;
                cout << sum << "\n";
                sum = x * y;
                cout << sum << "\n";
                sum = x / y;
                cout << sum << "\n";
                break;

            case 3:
                cout << "\n*********************************\n"
                        "*********** zadanie 3 ***********\n"
                        "*********************************\n\n";

                int x1, x2, x3, x4, x5;
                double sumAll;
                cout << "Podaj a = "; cin >> x1;
                cout << "Podaj b = "; cin >> x2;
                cout << "Podaj c = "; cin >> x3;
                cout << "Podaj d = "; cin >> x4;
                cout << "Podaj e = "; cin >> x5;
                sumAll = (double) x1 + x2 + x3 + x4 + x5;
                cout << "Suma twoich liczb to: " << sumAll << "\n";
                break;

            case 4:
                cout << "\n*********************************\n"
                        "*********** zadanie 4 ***********\n"
                        "*********************************\n\n";

                double a ,b ,c ,sqrt_x1 ,sqrt_x2 , delta, pierwiastek;

                cout << "Podaj parametr a funkcji kwadratowej: "; cin >> a;
                cout << "Podaj parametr b funkcji kwadratowej: "; cin >> b;
                cout << "Podaj parametr c funkcji kwadratowej: "; cin >> c;

                delta = b * b - 4 * a * c;
                pierwiastek = sqrt(delta);

                if (delta > 0) {
                    sqrt_x1 = (-b + pierwiastek) / 2*a;
                    sqrt_x2 = (-b - pierwiastek) / 2*a;
                    cout<<"Pierwiastki równania to: x1 = " << sqrt_x1 << " x2 = " << sqrt_x2 << "\n\n";

                } else if (delta == 0) {
                    sqrt_x1 = (-b + pierwiastek) / 2*a;
                    cout<<"Pierwiastkiem równania jest: x1 = " << sqrt_x1 << "\n\n";

                } else {
                    cout << "Rownanie nie ma rozwiazan w dziedzinie rzeczywistej\n\n";
                }
                break;

            case 5:
                return 0;

            default:
                cout << "Wybor musi byc z przedzialu 1-5\n\n";
                break;
        }

    }

}
