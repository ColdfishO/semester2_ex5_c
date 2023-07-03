#include <iostream>
#include<locale.h>
#include"klasa.h"
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
int main() {
    setlocale(LC_ALL, "");
    autor();
    string a, b, c;
    int x;
    TAudiobook test;
    cout << "\nPodaj nazwisko autora:" << endl;
    cin >> a;
    cout << "Podaj tytuł(spacje zastąp znakiem _):" << endl;
    cin >> b;
    cout << "Podaj rok wydania:" << endl;
    cin >> x;
    cout << "Podaj wydawnictwo:" << endl;
    cin >> c;
    test.Tksiazka::CzytajDane(a, b, x, c);
    cout << "Podaj nazwisko lektora:"<<endl;
    cin >> a;
    cout << "Podaj czas trwania w minutach:" << endl;
    cin >> x;
    cout << "Podaj rodzaj nośnika:" << endl;
    cin >> b;
    test.TZapisMowy::CzytajDane(a, x, b);
    cout << "Podaj liczbę nośników:" << endl;
    cin >> x;
    test.TAudiobook::CzytajDane(x);
    test.Tksiazka::PiszDane();
    test.TZapisMowy::PiszDane();
    test.TAudiobook::PiszDane();
    system("pause");
    return 0;
}