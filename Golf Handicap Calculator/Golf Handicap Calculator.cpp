#include <iostream>
#include "Player.h"
#include "PlayerList.h"
#include "PlayerListHandler.h"

int main()
{
   
	Player* p = new Player("Brayden", "Bowler", 7.50);
	Player* p2 = new Player("Harrison", "Bowler", 25.00);

	//p->displayPlayer();

	//cout << p2->getFirstName() << endl;
	//cout << p2->getLastName() << endl;
	//cout << p2->getHandicap() << endl;

	//Player* p3 = new Player();

	//p3->setFirstName("Nigel");
	//p3->setLastName("Bowler");
	//p3->setHandicap(15.00);

	//p3->displayPlayer();


	PlayerList* playerList = new PlayerList();
	playerList->addPlayer(p);
	playerList->addPlayer(p2);

	playerList->displayPlayerList();

	playerList->removePlayer(p2);

	playerList->displayPlayerList();

	PlayerListHandler::savePlayerList(playerList);

	PlayerList* newPlayerList = PlayerListHandler::loadPlayerList();

	return 0;

}
