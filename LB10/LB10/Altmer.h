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
		cout << "�������"<< endl;
		cout << "�������: " << age << endl;
		cout << "����: " << race << endl;
		cout << "������������ ������� : " << maxage << endl;
		cout << "�������: " << alch << endl;
		cout << "�����: " << magic << endl;
		cout << "������ ������: " << msg << endl;
	};
};

