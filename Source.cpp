#include<iostream>
#include<string>
#include"bashundhara.h"		
#include"bus.h"
#include"land.h"
#include"tissue.h"
#include"bpl_team.h"

#include"pran.h"			
#include"juice.h"
#include"milk.h"

using namespace std;

int main()
{
	//bashundhara group
	bashundhara bd;

	//bus
	bd.setBus_amount(200);
	bd.setRoute("Dhaka to Chittagong || Dhaka to sylhet || Dhaka to mymensingh");
	bd.setTiming("morning: 8am ||afternoon: 4pm evening: 7pm || night:10pm ");
	//land
	bd.setTotal_land("1000 acre");
	bd.setLocaton("kuril || khilkhet || mirpur || ashulia");
	bd.setLand_price("3 core per acre");
	//tissue
	bd.setColour("white || pink || blue || red");
	bd.setPrice("white:10tk || pink:15tk || blue:25tk || red:20tk");
	//bpl_team
	bd.setTeam_name("Rangpur Riders");
	bd.setPlayers(25);
	bd.setPlays_name("Cris Gayl,Brandan MCculum,Robi Bopara,Masrafi Mortaza(cap.),Shahriar Nafees,Malinga, etc.");

	//pran group
	juice pran_juice;
	milk pran_milk;
	pran *pbd1 = &pran_juice;
	pran *pbd2 = &pran_milk;

	pbd1->setSize("400ml.");
	pbd1->setPrice("22 tk.");

	pbd2->setSize("250ml.");
	pbd2->setPrice("15 tk.");

	//main functions

	char option, cont;
	do
	{
		cout << "Choose what u want to know(p,d): " << endl << "FOR ATTENTION:: 'p' for pran group , 'd' for bashundhara group" << endl;
		cin >> option;

		switch (option)
		{
		case 'p':

			cout << "WELCOME TO PRAN GROUP" << endl;
			char option, cont;
			do
			{
				cout << "Choose what u want to know(j,m): " << endl << "FOR ATTENTION:: 'j' for juice , 'm' for milk" << endl;
				cin >> option;

				switch (option)
				{
				case 'j':
					pran_juice.about1();
					pran_juice.about2();

					break;
				case 'm':
					pran_milk.about1();
					pran_milk.about2();

					break;

				default:
					printf("Invalid Choice");
				}

				cout << "\nDo you want to continue?(y/n): " << endl;
				cin >> cont;

			} while (cont == 'y');
			cout << "THANK YOU FOR VISITING PRAN GROUP" << endl;


			break;

		case 'd':

			cout << "WELCOME TO BASHUNDHARA GROUP" << endl;

			char option2, cont2;
			do
			{
				cout << "Choose what u want to know(b,l,t,p): " << endl << "FOR ATTENTION:: 'b' for bus, 'l' for land , 't' for tissue, 'p' for bpl_team " << endl;
				cin >> option2;

				switch (option2)
				{
				case 'b':
					cout << "BUS INFORMATION::" << endl;
					cout << "Bus_amount:" << bd.getBus_amount() << endl;
					cout << "Route:" << bd.getRoute() << endl;
					cout << "Timing:" << bd.getTiming() << endl << endl;
					break;
				case 'l':
					cout << "LAND INFORMATION::" << endl;
					cout << "Total_land:" << bd.getTotal_land() << endl;
					cout << "Locaton:" << bd.getLocaton() << endl;
					cout << "Price:" << bd.getLand_price() << endl << endl;
					break;
				case 't':
					cout << "TISSUE INFORMATION::" << endl;
					cout << "Colour:" << bd.getColour() << endl;
					cout << "Price:" << bd.getPrice() << endl << endl;
					break;
				case 'p':
					cout << "BPL_TEAM INFORMATION::" << endl;
					cout << "Team_name:" << bd.getTeam_name() << endl;
					cout << "Players:" << bd.getPlayers() << endl;
					cout << "Plays_name:" << bd.getPlays_name() << endl;
					break;

				default:
					printf("Invalid Choice");
				}

				cout<< "\nDo you want to continue?(y/n): " << endl;
				cin >> cont2;

			} while (cont2 == 'y');
			cout << "THANK YOU FOR VISITING BASHUNDHARA GROUP" << endl;

			break;

		default:
			printf("Invalid Choice");

		}

		cout << "\nDo you want to continue?(y/n): " << endl;
		cin >> cont;
	}while (cont == 'y');
	cout << "THANK YOU FOR VISITING OUR WEBSITE" << endl; 

}