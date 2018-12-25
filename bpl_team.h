#ifndef BPL_TEAM_H
#define BPL_TEAM_H
#include<iostream>
#include<string>
using namespace std;

class bpl_team
{
	string team_name;
	int players;
	string plays_name;

public:
	void setTeam_name(string team_name) { this->team_name = team_name; }
	string getTeam_name() { return this->team_name; }

	void setPlayers(int players) { this->players = players; }
	int getPlayers() { return this->players; }

	void setPlays_name(string plays_name) { this->plays_name = plays_name; }
	string getPlays_name() { return this->plays_name; }
};
#endif
