#include<iostream>
#include"klasa.h"
using namespace std;
Tksiazka::Tksiazka() {
	RokWydania = 0;
	cout << "Uruchamiany konstruktor klasy Tksiazka" << endl;
}
Tksiazka::~Tksiazka() {
	cout << "Uruchamiany destruktor klasy Tksiazka"<<endl;
}
TZapisMowy::TZapisMowy() {
	CzasTrwania = 0;
	cout << "Uruchamiany konstruktor klasy TZapisMowy" << endl;
}
TZapisMowy::~TZapisMowy() {
	cout << "Uruchamiany destruktor klasy TZapisMowy" << endl;
}
TAudiobook::TAudiobook() {
	LiczbaNosnikow = 0;
	cout << "Uruchamiany konstruktor klasy TAudiobook"<<endl;
}
TAudiobook::~TAudiobook() {
	cout << "Uruchamiany destruktor klasy TAudiobook" << endl;
}
void Tksiazka::CzytajDane(string x, string y, int z, string b) {
	Autor = x;
	Tytul = y;
	RokWydania = z;
	Wydawnictwo = b;
}
void Tksiazka::PiszDane() {
	cout << Autor << " " << Tytul << " " << RokWydania << " " << Wydawnictwo << endl;
}
void TZapisMowy::CzytajDane(string x, int y, string z) {
	Lektor = x;
	CzasTrwania = y;
	Nosnik = z;
}
void TZapisMowy::PiszDane() {
	cout << Lektor << " " <<CzasTrwania << " " << Nosnik << endl;
}
void TAudiobook::CzytajDane(int x) {
	LiczbaNosnikow = x;
}
void TAudiobook::PiszDane() {
	cout <<LiczbaNosnikow<< endl;
}
