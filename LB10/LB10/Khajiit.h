#pragma once
#include "PlayRace.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
class Khajiit : public PlayRace
{
private:
	int age;
	string race;
	int maxage ;
	int alch ;
	int shadow ;
	string msg ;
public:
	Khajiit();
	~Khajiit();
	PlayRace* create() const { return new Khajiit(); }
	void infoabout()
	{
		cout << "Каджит" << endl;
		cout << "Возраст: " << age << endl;
		cout << "Раса: " << race << endl;
		cout << "Максимальный возраст : " << maxage << endl;
		cout << "Алхимия: " << alch << endl;
		cout << "Скрытность: " << shadow << endl;
		cout << "Особое умение: " << msg << endl;
	};
};

