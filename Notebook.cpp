#include "pch.h"
#include "Notebook.h"
#include <iostream>
using namespace std;
int pages, price;
string color;
Notebook::Notebook()
{
	color[0] = *"Red";
	pages = 60;
	price = 38;
	get();
};


void Notebook::massage() {
	cout << "Class is working";

};
void Notebook::set( char [10], int , int ) {

};

void Notebook::get() {
	cout << "The color of this notebook - " << ", << number is -" << pages << "price is -" << price << "uah" << endl;
};
Notebook::~Notebook()
{
}

void set(char date_color, int date_pages, int date_price)
{
	color = date_color;
	pages = date_pages;
	price = date_price;
}
