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
		cout << "����" << endl;
		cout <<"�������: "<< age <<endl;
		cout <<"����: "<< race <<endl;
		cout <<"������������ ������� : "<< maxage << endl;
		cout <<"����: "<< strong << endl;
		cout <<"�����: "<< magic << endl;
		cout <<"������ ������: "<< msg << endl;
	}
	PlayRace* create() const { return new Nord(); }
};

