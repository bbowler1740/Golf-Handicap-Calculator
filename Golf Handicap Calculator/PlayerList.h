#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Player.h"

using namespace std;

class PlayerList {

friend class PlayerListHandler;

private:

	std::vector<Player*> playerList;
	

public:

	void addPlayer(Player*);
	void removePlayer(Player*);
	void displayPlayerList();

};

