﻿// ************************************************************************************************
// Порядок вызова деструкторов при множественном наследовании. ООП. | С++ начинающих. | Урок #111 
// ------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
// ************************************************************************************************

#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

/*---------------------------------------------------------------
 *  порядок вызова деструкторов при множественном наследовании
 *--------------------------------------------------------------*/

class Car
{
public:
	string str1 = "Поле класса машина";

	Car()
	{
		cout << " Вызван Constructor класса \"Car\"" << endl;
	}

	~Car()
	{
		cout << " Вызван Destructor класса \"Car\"" << endl;
	}

	void Drive()
	{
		cout << " Я еду! " << endl;
	}
};


class Airplain
{
public:
	string str2 = "Поле класса самолёт";

	Airplain()
	{
		cout << " Вызван Constructor класса \"Airplain\"" << endl;
	}

	~Airplain()
	{
		cout << " Вызван Destructor класса \"Airplain\"" << endl;
	}

	void Fly()
	{
		cout << " Я лечу! " << endl;
	}

};


class FlyingCar : public Car, public Airplain	// множественное наследование 
{
public:
	FlyingCar()
	{
		cout << " Вызван Constructor класса \"FlyingCar\"" << endl;
	}

	~FlyingCar()
	{
		cout << " Вызван Destructor класса \"FlyingCar\"" << endl;
	}

};


/***********************
		  MAIN
************************/
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");
	cout << "\n____________________________________________________________\n" << endl;
	FlyingCar fc;
	cout << "\n____________________________________________________________\n" << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;

}