#ifndef JUICE_h
#define JUICE_h
#include<iostream>
#include<string>
#include"pran.h"
using namespace std;

class juice : virtual public pran
{
public:
	void about1() { cout << " The size of juice: " << size << endl; }
	void about2() { cout << " The price of juice: " << price << endl; }
};
#endif
