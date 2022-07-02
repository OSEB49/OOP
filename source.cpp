#include<iostream>
#include"Data.h"
#include"Osoba.h"
#include"Kontakt.h"
#include"Element_of_telebook.h"

using namespace std;

int main() {

	Data moja_data;

	Data nowa_data(6, -5, 2021);

	nowa_data.setDzien(30);
	nowa_data.setMiesiac(3);

	cout << "Dzien " << nowa_data.getDzien() << endl;
	cout << "Miesiac " << nowa_data.getMiesiac() << endl;

	cout << "\n-----------------------------------\n";

	Osoba jakas_osoba;

	cout << "Nazwisko " << jakas_osoba.getNazwisko() << endl;
	cout << "Data urodzenia " << 
		jakas_osoba.getData_urodzenia().getDzien() << "-" <<
		jakas_osoba.getData_urodzenia().getMiesiac() << "-" <<
		jakas_osoba.getData_urodzenia().getRok() << endl;

	cout << "\n-----------------------------------\n";

	Osoba nowa_osoba("Patryk", "Jasik", nowa_data);

	cout << "Imie " << nowa_osoba.getImie() << endl;
	cout << "Nazwisko " << nowa_osoba.getNazwisko() << endl;
	cout << "Data urodzenia " <<
		nowa_osoba.getData_urodzenia().getDzien() << "-" <<
		nowa_osoba.getData_urodzenia().getMiesiac() << "-" <<
		nowa_osoba.getData_urodzenia().getRok() << endl;

	cout << "\n-----------------------------------\n";

	Osoba inna_osoba("AAAA", "BBBB", Data(7,11,2021));

	cout << "Imie " << inna_osoba.getImie() << endl;
	cout << "Nazwisko " << inna_osoba.getNazwisko() << endl;
	cout << "Data urodzenia " <<
		inna_osoba.getData_urodzenia().getDzien() << "-" <<
		inna_osoba.getData_urodzenia().getMiesiac() << "-" <<
		inna_osoba.getData_urodzenia().getRok() << endl;

	cout << "\n-----------------------------------\n";

	inna_osoba.setImie("Olga");
	inna_osoba.setNazwisko("Tokarczuk");
	//inna_osoba.setData_urodzenia(nowa_data);
	inna_osoba.setData_urodzenia(Data(11,11,1111));

	cout << "Imie " << inna_osoba.getImie() << endl;
	cout << "Nazwisko " << inna_osoba.getNazwisko() << endl;
	cout << "Data urodzenia " <<
		inna_osoba.getData_urodzenia().getDzien() << "-" <<
		inna_osoba.getData_urodzenia().getMiesiac() << "-" <<
		inna_osoba.getData_urodzenia().getRok() << endl;

	cout << "\n-----------------------------------\n";

	Osoba wazna_osoba("Sw.", "Mikolaj", 1, 14, 1777);

	cout << "Imie " << wazna_osoba.getImie() << endl;
	cout << "Nazwisko " << wazna_osoba.getNazwisko() << endl;
	cout << "Data urodzenia " <<
		wazna_osoba.getData_urodzenia().getDzien() << "-" <<
		wazna_osoba.getData_urodzenia().getMiesiac() << "-" <<
		wazna_osoba.getData_urodzenia().getRok() << endl;

	cout << "\n-----------------------------------\n";
	cout << "\n-----------------------------------\n";

	Element_of_telebook osoba_pierwsza;

	return 0;
}