#include "PlayerList.h"

using namespace std;

void PlayerList::addPlayer(Player* player) {

	this->playerList.push_back(player);

}

void PlayerList::removePlayer(Player* player) {

	int iterationCount = 0;
	for (Player* p : this->playerList) {

		if (p == player) {

			this->playerList.erase(playerList.begin() + iterationCount);
			return;
		}

		iterationCount++;

	}

}

void PlayerList::displayPlayerList() {

	for (Player* p : this->playerList) {

		p->displayPlayer();

	}

}
