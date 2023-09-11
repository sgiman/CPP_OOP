﻿//****************************************************************************************************
// Методы класса. Что такое методы в программировании. Вызов метода класса. Функции.| Уроки C++ #74  
// ---------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//****************************************************************************************************

#include <iostream>
#include <string>
#include "utils.h"

using namespace std;

/*---------------------
*	методы класса
*	функции класса
----------------------*/
class Human							// класс Human
{
public:								// модификатор доступа
	int age;						// поля (свойства) - для переменных область видимости только в пределах класса (доступ к публичным свойствам возможен только через объект класса)
	int weight;
	string name;

	void Print()					// метод Print
	{
		cout << "\n Имя: " << name << "\n Вес: " << weight << "\n Возраст: " << age << endl;
	}
};


/***********************
		  MAIN
************************/
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	cout << "\n____________________________________________________________\n" << endl;

	// Объект(экземпляр) - первый человек 
	Human fistHuman;
	fistHuman.age = 30;
	fistHuman.name = "Иванов Иван";
	fistHuman.weight = 100;
	fistHuman.Print();						// вызов общего метода "Print" для первого объекта 

	// Объект(экземпляр) - второй человек
	Human secondHuman;
	secondHuman.age = 19;
	secondHuman.name = "Петр Петров";
	secondHuman.weight = 60;
	secondHuman.Print();					// вызов общего метода "Print" для второго объекта 


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;

}
