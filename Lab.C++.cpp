// Lab.C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Notebook.h"
using namespace std;

int main()
{
	char colorname[10] = "Green";
	Notebook One;
	One.set( colorname, 95, 45);
	One.get();
	cin.get();
	return 0;
}

