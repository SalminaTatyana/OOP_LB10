// LB10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "PlayRace.h"
#include "Nord.h"
#include "Altmer.h"
#include "Khajiit.h"
using namespace std;
enum PerceID
{
    nord = 1,
    altmer = 2,
    khajiit = 3
};
PlayRace* CreatePerce(PerceID id)
{
    PlayRace* Perce;
    switch (id) {
    case PerceID(1):
        Perce = new Nord();
        return (Perce);
        break;
    case PerceID(2):
        Perce = new Altmer();
        return (Perce);
        break;
    case PerceID(3):
        Perce = new Khajiit();
        return (Perce);
        break;
    default:break;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Выберите расу вашего персонажа"<<endl;
    cout << "1-Норд" << endl;
    cout << "2-Альтмер" << endl;
    cout << "3-Каджит" << endl;
    int i;
    while (!(cin >> i)) {
        cout << "выберите число от 1 до 5";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    PerceID Perce;
    switch (i) {
    case 1:
        Perce = nord; CreatePerce(Perce)->infoabout();
        break;
    case 2:Perce = altmer; CreatePerce(Perce)->infoabout();
        break;
    case 3: Perce = khajiit; CreatePerce(Perce)->infoabout();
        break;
    default: cout<<"Раса отсутсвует для данного значения" << endl;
        break;
    }
}

