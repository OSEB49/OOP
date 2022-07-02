#include<iostream>
#include "Osoba.h"

using namespace std;

Osoba::Osoba()
{
	cout << "Dziala konstruktor klasy Osoba bez arg.\n";
	imie = "Jhon";
	nazwisko = "Doe";
}

Osoba::Osoba(string _imie, string _nazwisko, Data _data_urodzenia):
	imie(_imie),
	nazwisko(_nazwisko),
	data_urodzenia(_data_urodzenia)
{
	cout << "Dziala konstruktor klasy Osoba z arg.\n";
}

Osoba::Osoba(string _imie, string _nazwisko, int _dzien, int _miesiac, int _rok):
	imie(_imie),
	nazwisko(_nazwisko),
	data_urodzenia(_dzien, _miesiac, _rok)
{
	cout << "Dziala konstruktor klasy Osoba z 5 arg.\n";
	//data_urodzenia = Data(_dzien, _miesiac, _rok);
}

void Osoba::setImie(string _imie) { imie = _imie; }
void Osoba::setNazwisko(string _nazwisko) { nazwisko = _nazwisko; }
void Osoba::setData_urodzenia(Data data_urodzenia){
	this->data_urodzenia = data_urodzenia;
}

string Osoba::getImie(){ return imie; }
string Osoba::getNazwisko(){ return nazwisko; }
Data Osoba::getData_urodzenia(){ return data_urodzenia; }