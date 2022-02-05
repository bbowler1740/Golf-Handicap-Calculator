#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Player.h"
#include "PlayerList.h"

#define FILE_NAME "playerFile.txt"

using namespace std;

class PlayerListHandler {

private:

public:

	static void savePlayerList(PlayerList*);
	static PlayerList* loadPlayerList();

};

