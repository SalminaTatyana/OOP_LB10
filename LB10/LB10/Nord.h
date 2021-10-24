#pragma once
#include "PlayRace.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
class Nord : public PlayRace
{
private:
	int age;
	string race;
	int maxage;
	int strong;
	int magic;
	string msg;
public:
	Nord();
	~Nord();
	void infoabout()
	{
		cout << "Норд" << endl;
		cout <<"Возраст: "<< age <<endl;
		cout <<"Раса: "<< race <<endl;
		cout <<"Максимальный возраст : "<< maxage << endl;
		cout <<"Сила: "<< strong << endl;
		cout <<"Магия: "<< magic << endl;
		cout <<"Особое умение: "<< msg << endl;
	}
	PlayRace* create() const { return new Nord(); }
};

