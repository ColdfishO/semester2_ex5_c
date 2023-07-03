#ifndef KLASA_H
#define KLASA_H
using namespace std;
class Tksiazka {
protected:
	string Autor;
	string Tytul;
	int RokWydania;
	string Wydawnictwo;
public:
	void CzytajDane(string x, string y, int z, string b);
	void PiszDane();
	Tksiazka();
	~Tksiazka();
};
class TZapisMowy {
protected:
	string Lektor;
	int CzasTrwania;
	string Nosnik;
public:
	void CzytajDane(string x, int y, string z);
	void PiszDane();
	TZapisMowy();
	~TZapisMowy();
};
class TAudiobook : public Tksiazka, public TZapisMowy {
private:
	int LiczbaNosnikow;
public:
	void CzytajDane(int x);
	void PiszDane();
	TAudiobook();
	~TAudiobook();
};
#endif