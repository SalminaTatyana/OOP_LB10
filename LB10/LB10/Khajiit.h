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
		cout << "������" << endl;
		cout << "�������: " << age << endl;
		cout << "����: " << race << endl;
		cout << "������������ ������� : " << maxage << endl;
		cout << "�������: " << alch << endl;
		cout << "����������: " << shadow << endl;
		cout << "������ ������: " << msg << endl;
	};
};

