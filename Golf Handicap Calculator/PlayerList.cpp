#include "PlayerList.h"

using namespace std;

/// <summary>
/// Adds a Player object to the PlayerList.
/// </summary>
/// <param name="player">Player object to be added to the PlayerList.</param>
void PlayerList::addPlayer(Player* player) {

	this->playerList.push_back(player);

}

/// <summary>
/// Removes a Player object from the PlayerList based on object equality.
/// </summary>
/// <param name="player">Player object to be removed from the PlayerList.</param>
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

/// <summary>
/// Iterates through the PlayerList object and displays each Player object in the list to the console.
/// </summary>
void PlayerList::displayPlayerList() {

	for (Player* p : this->playerList) {

		p->displayPlayer();

	}

}
