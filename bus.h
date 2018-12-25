#ifndef BUS_H
#define BUS_H
#include<iostream>
#include<string>
using namespace std;

class bus
{
	int bus_amount;
	string route;
	string timing;

public:
	
	void setBus_amount(int bus_amount) { this->bus_amount = bus_amount; }
	int getBus_amount() { return this->bus_amount; }

	void setRoute(string route) { this->route = route; }
	string getRoute() { return this->route; }

	void setTiming(char* timing) { this->timing = timing; }
	string getTiming() { return this->timing; }
};
#endif