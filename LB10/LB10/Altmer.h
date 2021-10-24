#pragma once
#include "PlayRace.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
class Altmer : public PlayRace
{
private:
	int age;
	string race ;
	int maxage;
	int alch ;
	int magic;
	string msg;
public:
	Altmer();
	~Altmer();
	PlayRace* create() const { return new Altmer(); }
	void infoabout()
	{
		cout << "Альтмер"<< endl;
		cout << "Возраст: " << age << endl;
		cout << "Раса: " << race << endl;
		cout << "Максимальный возраст : " << maxage << endl;
		cout << "Алхимия: " << alch << endl;
		cout << "Магия: " << magic << endl;
		cout << "Особое умение: " << msg << endl;
	};
};

