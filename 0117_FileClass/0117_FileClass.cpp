﻿//****************************************************************************************************************
// Запись ОБЪЕКТА КЛАССА в файл с++. Чтение объекта из файла c++ Для начинающих. | Visual Studio 2019 | Урок #117
// ---------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// --------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//****************************************************************************************************************

#include <iostream>
#include <string>
#include <fstream>
#include "utils.h"

using namespace std;

/*--------------------------------------------
 * чтение/сохранение объекта класса в файл
 *-------------------------------------------*/

class Point
{

public:

	Point()							// конструктор без параметров
	{
		x = y = z = 0;
	}

	Point(int x, int y, int z)		// конструктор с параметрами
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void Print()														// Метод															
	{
		cout << " X: " << x << "\tY: " << y << "\tZ: " << z << endl;	// Вывод
	}

	int x;
	int y;
	int z;

};

/********************************
			  MAIN
****************************(***/
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	Point pn(10, 50, 70);		// объект класса Point
	pn.Print();					// вывести координаты 

	cout << "\n____________________________________________________________\n" << endl;

	string path = "myFile.txt";
	ofstream fout;

	/*-----------------------------------------------------------------------------------
	// --- (1) F I L E (WRITE) ---
	Point point(001, 001, 001);

	fout.open(path, ofstream::app);							// окрыть файл для дозаписи

	if (!fout.is_open())
	{
		cout << " Ошибка открытия файла! " << endl;
	}
	else
	{
		cout << " Файл открыт! " << endl;
		fout.write((char*)&point, sizeof(Point));			// запись в файл - (char*)&pnt = привести к типу (сhar*) по ссылке на обьект &pnt
	}
	fout.close();
	-----------------------------------------------------------------------------------*/

	// --- (2) F I L E (READ) ---
	ifstream fin;
	fin.open(path);											// окрыть файл для чтения
	if (!fin.is_open())
	{
		cout << " Ошибка открытия файла! " << endl;
	}
	else
	{
		cout << " Файл открыт! " << endl;

		Point pnt;											// Объект (класса Point) до считывания данных 
		while (fin.read((char*)&pnt, sizeof(Point)))		// чтение из файла - (char*)&pnt = привести к типу (сhar*) по ссылке на обьект &pnt
		{
			pnt.Print();
		}
	}
	fin.close();

	cout << "\n____________________________________________________________\n" << endl;

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}