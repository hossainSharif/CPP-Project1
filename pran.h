#ifndef PRAN_H
#define PRAN_H
#include<iostream>
#include<string>


using namespace std;

class pran
{

public:
	string size;
	string price;

	void setSize(string size) { this->size = size; }


	void setPrice(string price) { this->price = price; }


	void about1() { cout << " Invalid size." << endl; }
	void about2() { cout << " Invalid price." << endl; }
};
#endif