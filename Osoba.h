#pragma once
#include<string>
#include"Data.h"

using namespace std;

class Osoba {
	string imie, nazwisko;
	Data data_urodzenia;
public:
	Osoba();
	Osoba(string imie, string nazwisko, Data data_urodzenia);
	Osoba(string imie, string nazwisko, int dzien, int miesiac, int rok);

	void setImie(string);
	void setNazwisko(string);
	void setData_urodzenia(Data);

	string getImie();
	string getNazwisko();
	Data getData_urodzenia();
};