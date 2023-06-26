#include <iostream>
#include <string>

using namespace std;

class Character
{
private:
	string characterName;
	int characterLevel;
	int characterXP;
public:
	Character();
	Character(string, int, int);
	void setCharacterName(string);
	void setCharacterXP(int);
	void setCharacterLevel(int);
	string getCharacterName();
	int getCharacterXP();
	int getCharacterLevel();
	void getInput();
	void displayCharacterInfo();
};