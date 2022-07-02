#pragma once

#include<iostream>
#include"Data.h"

using namespace std;

Data::Data()
{
	cout << "Dziala konstruktor klasy Data bez arg.\n";
	dzien = 1;
	miesiac = 1;
	rok = 1900;
}

Data::Data(int _dzien, int _miesiac, int _rok):
	dzien(_dzien), rok(_rok)
{
	cout << "Dziala konstruktor klasy Data z arg.\n";
	//dzien = _dzien; <==> dzien(_dzien) ale w liscie inicjalizacyjnej
	
	while (_miesiac <= 0 || _miesiac >= 13)
	{
		cout << "Poprawna wartosc miesiace znajduje sie w przedziale <1,12>.\n";
		cout << "Podaj poprawna wartosc miesiaca ";
		cin >> _miesiac;
	}

	miesiac = _miesiac;

}

void Data::setDzien(int _dzien)
{
	dzien = _dzien;
}

void Data::setMiesiac(int miesiac)
{
	this->miesiac = miesiac;
}

void Data::setRok(int rok)
{
	this->rok = rok;
}

int Data::getDzien()
{
	return dzien;
}

int Data::getMiesiac()
{
	return miesiac;
}

int Data::getRok()
{
	return rok;
}