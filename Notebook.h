#include "pch.h"
#pragma once
	class Notebook
{
private:
	int pages, price;
	char color[10];
public:
	Notebook();
	~Notebook();
	void massage();
	void set( char[] ,int , int );
	void get();
	
};

	