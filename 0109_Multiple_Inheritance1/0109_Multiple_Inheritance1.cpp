﻿// ***********************************************************************************************
// Множественное наследование c++ пример. ООП. | Изучение С++ с нуля для начинающих. | Урок #109  
// -----------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -----------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
// ***********************************************************************************************

#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

/*-------------------------------
*  множественное наследование
*-------------------------------*/

class Car
{
public:
	string str1 = "Поле класса машина";

	void Drive()
	{
		cout << " Я еду! " << endl;
	}
};


class Airplain
{
public:
	string str2 = "Поле класса самолёт";

	void Fly()
	{
		cout << " Я лечу! " << endl;
	}

};


class FlyingCar : public Car, public Airplain	// множественное наследование 
{


};


/***********************
		   MAIN
************************/
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "\n____________________________________________________________\n" << endl;

	cout << "\n Car: " << endl;
	Car c;
	c.Drive();

	cout << "\n Airplain: " << endl;
	Airplain a;
	a.Fly();

	cout << "\n FlyingCar: " << endl;
	FlyingCar fc;
	fc.Drive();
	fc.Fly();

	// Доcтупные свойства:
	//fc.str1;
	//fc.str2;

	// Указатель на базовый класс может хранить ссылку на любой класс-наследник
	//Car *ptrCar = &c;
	Car* ptrC = &fc;			// Указатель объекта класса "Car" = Aдрес объекта для класса-наследника "FlyingCar"  
	Airplain* ptrA = &fc;		// Указатель объекта класса "Airplain" = Aдрес объекта для класса-наследника "FlyingCar"  

	cout << "\n____________________________________________________________\n" << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;

}