#pragma once

#include<iostream>
#include "Kontakt.h"

using namespace std;

Kontakt::Kontakt()
{
	cout << "Dziala konstruktor klasy Kontakt bez arg.\n";
	tel = 999999999;
	email = "aaa@bbb.com";
}
