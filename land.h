#ifndef LAND_H
#define LAND_H
#include<iostream>
#include<string>

using namespace std;

class land
{
	string total_land;
	string locaton;
	string land_price;

public:
	void setTotal_land(string total_land) { this->total_land = total_land; }
	string getTotal_land() { return this->total_land; }

	void setLocaton(string locaton) { this->locaton = locaton; }
	string getLocaton() { return this->locaton; }

	void setLand_price(string land_price) { this->land_price = land_price; }
	string getLand_price() { return this->land_price; }

};
#endif
