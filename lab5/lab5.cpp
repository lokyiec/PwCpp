#include <iostream>
#include <math.h>

using namespace std;

void printAllSubset(int *A, int len, int *B, int len2, int index) {
    if (index >= len) {
        for (int i = 0; i < len2; ++i) {
            cout << B[i] << " ";
        }
        cout << "\n";

        return;
    }
    printAllSubset(A, len, B, len2, index+1);

    B[len2] = A[index];
    printAllSubset(A, len, B, len2+1, index+1);
}

int fibb(int n) {
   if (n <= 1)  return n;
   return fibb(n-1) + fibb(n-2);
}

int fibbDyn(int n) {
    int a, b;
    if(n == 0) return 0;
    a = 0;
    b = 1;
    for(int i = 0; i < (n-1); i++) {
        b += a;
        a = b-a;
    }
    return b;
}

void trojki(int size) {
    for (int a = 1; a <= size; a++) {
        for (int b = 1; b <= size; b++) {
            for (int c = 1; c <= size; c++) {
                if (a * a + b * b == c * c) {
                    cout << a << " " << b << " " << c << "\n";
                }
            }
        }
    }
}

int silniaDZ(int n) {
    if (n == 0 || n == 1) return 1;
    else    return n * silniaDZ(n - 1);
}

int newtonPD(int n, int k) {
    int newton[n + 1][k + 1];
    for (int nn = 0; nn <= n; nn++) {
        for (int kk = 0; kk <= k; kk++) {
            if (kk == 0 || kk == nn) {
                newton[nn][kk] = 1;
            } else {
                newton[nn][kk] = newton[nn - 1][kk - 1] + newton[nn - 1][kk];
            }
        }
    }
    return newton[n][k];
}

void resztaZachlanny(int reszta) {
    int M[] = {500, 200, 100, 50, 20, 10, 5, 2, 1}; int i = 0;
    while (reszta > 0) {
        if (reszta >= M[i]) {
            cout << (M[i] / 100.0) << " ";
            reszta -= M[i];
        } else {
            i++;
        }
    }
}

void resztaMonteCarlo(int r) {
    srand (time(NULL));
    int MONETY[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int LIMIT_WYDANYCH_MONET = 20;
    int LICZBA_LOSOWAN = 20;
    int minLiczbaWydanychMonet = LIMIT_WYDANYCH_MONET;
    int wydaneMonety[LIMIT_WYDANYCH_MONET];
    int minWydaneMonety[minLiczbaWydanychMonet];
    int moneta;
    for (int i = 0; i < LICZBA_LOSOWAN; i++) {
        int liczbaWydanychMonet = 0;
        while (r > 0 && liczbaWydanychMonet < LIMIT_WYDANYCH_MONET) {
            moneta = MONETY[rand() % 9];
            if (r >= moneta) {
                wydaneMonety[liczbaWydanychMonet] = moneta;
                r -= moneta;
                liczbaWydanychMonet++;
            }
        }
        if (minLiczbaWydanychMonet > liczbaWydanychMonet && liczbaWydanychMonet > 0) {
            minLiczbaWydanychMonet = liczbaWydanychMonet;
            for (int j = 0; j < minLiczbaWydanychMonet; j++) {
                minWydaneMonety[j] = wydaneMonety[j];
            }
        }
    }
    if (minLiczbaWydanychMonet < LIMIT_WYDANYCH_MONET) {
        cout << "Reszta: ";
        for (int i = 0; i < minLiczbaWydanychMonet; i++) {
            cout << minWydaneMonety[i] / 100.0 << " ";
        }
    } else {
        cout << "Nie znalezniono rozwiazania"; }
    }

int main() {
    int choice;

    cout << "\nWybierz jedna z ponizszych opcji:\n";
    cout << "1: zadanie 1\n"
            "2: zadanie 2\n"
            "3: zadanie 3\n"
            "4: zadanie 4\n"
            "5: Wyjscie\n";

    cout << "Wybrana opcja: "; cin >> choice;


    switch (choice) {
        case 1: {
            cout << "\n*********************************\n"
                    "*********** zadanie 1 ***********\n"
                    "*********************************\n\n";

            cout << "trojki\n";
            trojki(5);
            cout << "\nsilniaDZ 5 = \n" << silniaDZ(5) << "\n\n";
            cout << "\nNewtonPD 5 2 = \n" << newtonPD(5, 2) << "\n\n";

            int reszta = 110;
            resztaZachlanny(reszta);
            cout << "\n\n";
            resztaMonteCarlo(reszta);

            break;
        }

        case 2: {
            cout << "\n*********************************\n"
                    "*********** zadanie 2 ***********\n"
                    "*********************************\n\n";

            cout << "Generowanie wszystkich podzbiorow zbioru czteroelemntowego:\n";

            int A[] = {1, 2, 3, 4};
            int B[5] = {0};

            printAllSubset(A, 4, B, 0, 0);
            cout << "\n";

            break;
        }

        case 3:
            cout << "\n*********************************\n"
                    "*********** zadanie 3 ***********\n"
                    "*********************************\n\n";

            int fibbo;
            cout << "Metoda dziel i zwyciezaj\n\n";
            cout << "Podaj nr wyrazu ciągu fibbonaciego: ";  cin >> fibbo;
            cout << "\nWyraz: " << fibbo << " ciagu fibbonaciego to: " << fibb(fibbo) << "\n\n";

            break;

        case 4:
            cout << "\n*********************************\n"
                    "*********** zadanie 4 ***********\n"
                    "*********************************\n\n";

            int fibboDyn;
            cout << "Metoda programowania dynamicznego\n\n";
            cout << "Podaj nr wyrazu ciągu fibbonaciego: ";  cin >> fibboDyn;
            cout << "\nWyraz: " << fibboDyn << " ciagu fibbonaciego to: " << fibbDyn(fibboDyn) << "\n\n";

            break;

        case 5:
            return 0;

        default:
            cout << "Wybor musi byc z przedzialu 1-5\n\n";
            break;
    }

    return 0;

}
