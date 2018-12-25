#ifndef MILK_H
#define MILK_H
#include<iostream>
#include<string>
#include"pran.h"
using namespace std;

class milk : virtual public pran
{
public:
	void about1() { cout << " The price of milk: " << size << endl; }
	void about2() { cout << " The price of milk: " << price << endl; }

};
#endif
