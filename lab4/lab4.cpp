#include <iostream>
#include <math.h>
#include <fstream>
#include <ctime>

using namespace std;

double globalVariable = 0;

void addGlobalVariable(double a) {
    globalVariable += a;
}

void subGlobalVariable(double a) {
    globalVariable -= a;
}

void removeExtraSpaces(char* str, char* newstr) {
    int check = 0;
    char c;
    int index = 0;
    int i = 0;

    while(str[i]) {
        c = str[i];
        if (isspace(c) && check==0) {
            newstr[index++] = str[i];
            check = 1;
        } else if (isalnum(c)) {
            newstr[index++] = str[i];
            check = 0;
        }
        i++;
    }
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



            break;
        }

        case 2: {
            cout << "\n*********************************\n"
                    "*********** zadanie 2 ***********\n"
                    "*********************************\n\n";

            double addGlobal;

            cout << "Zmienna globalna ma wartosc: " << globalVariable << "\n\n";
            cout << "Podaj liczbe jaka chcesz dodac: "; cin >> addGlobal;
            addGlobalVariable(addGlobal);
            cout << "Zmienna globalna ma wartosc: " << globalVariable << "\n\n";
            cout << "Podaj liczbe jaka chcesz odjac: "; cin >> addGlobal;
            subGlobalVariable(addGlobal);
            cout << "Zmienna globalna ma wartosc: " << globalVariable << "\n\n";


            break;
        }

        case 3: {
            cout << "\n*********************************\n"
                    "*********** zadanie 3 ***********\n"
                    "*********************************\n\n";

            char str[] = "I    am a student    of     the University of Rzeszow";
            char newstr[80];

            cout << str << "\n\n";
            removeExtraSpaces(str, newstr);
            cout << newstr << "\n\n";

            break;
        }

        case 4: {
            cout << "\n*********************************\n"
                    "*********** zadanie 4 ***********\n"
                    "*********************************\n\n";

            srand( time( NULL ) );

            ofstream output( "randNumber.txt");

            for (int i = 1; i <= 10; i++) {
                output << rand()%50 << "\n";
            }

            output.close();

            break;
        }

        case 5: {
            cout << "\n*********************************\n"
                    "*********** zadanie 5 ***********\n"
                    "*********************************\n\n";

            int data[10];
            int sum = 0;

            ifstream input("randNumber.txt");

            for (int i = 0; i < 10; i++) {
                input >> data[i];
                cout<< data[i] << "\n";
                sum += data[i];
            }
            cout << "Suma = " << sum << "\n\n";

            break;
        }

        case 6:
            return 0;

        default:
            cout << "Wybor musi byc z przedzialu 1-5\n\n";
            break;
    }

}
