#ifndef TISSUE_H
#define TISSUE_H
#include<iostream>
#include<string>

using namespace std;

class tissue
{
	string colour;
	string price;

public:
	void setColour(string colour) { this->colour = colour; }
	string getColour() { return this->colour; }

	void setPrice(string price) { this->price = price; }
	string getPrice() { return this->price; }
};
#endif
