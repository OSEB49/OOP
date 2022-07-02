#pragma once

class Data {
	int dzien, miesiac, rok;
public:
	Data();
	Data(int dzien, int miesiac, int rok);

	void setDzien(int);
	void setMiesiac(int);
	void setRok(int);

	int getDzien();
	int getMiesiac();
	int getRok();
};