#include "PlayerListHandler.h"

using namespace std;

/// <summary>
/// Saves the PlayerList object to file.
/// </summary>
/// <param name="playerList">PlayerList object to be saved to file.</param>
void PlayerListHandler::savePlayerList(PlayerList* playerList) {

	if (FILE_NAME) {
		remove(FILE_NAME);
	}

	std::ofstream saveFile;
	saveFile.open(FILE_NAME);

	if (saveFile.is_open()) {

		for (Player* p : playerList->playerList) {

			saveFile << p->getFirstName() << "\n";
			saveFile << p->getLastName() << "\n";
			saveFile << p->getHandicap() << "\n";

		}

	}

	saveFile.close();

}

PlayerList* PlayerListHandler::loadPlayerList() {

	PlayerList* loadedList = new PlayerList();

	std::ifstream loadFile(FILE_NAME);

	std::string firstName;
	std::string lastName;
	std::string readLine;
	double handicap;

	//Player objects are saved to file in three consecutive lines.
	//1. Check which line is currently being read.
	//2. Based on the line number, determine which Player object member is being read.
	//3. Reset the line count once a Player object is fully read into program memory.
	int fileLineCount = 1;
	if (loadFile.is_open()) {

		while (getline(loadFile, readLine)) {

			if (fileLineCount == 1) {
				firstName = readLine;
			}

			else if (fileLineCount == 2) {
				lastName = readLine;
			}

			else if (fileLineCount == 3) {
				handicap = stod(readLine);
				Player* loadedPlayer = new Player(firstName, lastName, handicap);
				loadedList->addPlayer(loadedPlayer);
				fileLineCount = 0;
			}

			fileLineCount++;

		}

		loadFile.close();

	}

	return loadedList;

}


