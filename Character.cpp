#include "Character.h"

Character::Character()
{
  characterName = "";
  characterLevel = 1;
  characterXP = 0;
}

Character::Character(string name, int xp, int level) 
{
  characterName = name;
  characterXP = xp;
  characterLevel = level;
}

void Character::setCharacterName(string name)
{
  characterName = name;
}

void Character::setCharacterXP(int xp)
{
  characterXP = xp;
}

void Character::setCharacterLevel(int level)
{
  characterLevel = level;
}

string Character::getCharacterName()
{
  return characterName;
}

int Character::getCharacterXP() 
{
  return characterXP;
}

int Character::getCharacterLevel()
{
  return characterLevel;
}

void Character::getInput()
{
  cout << "Please enter character name: \n";
  cin >> characterName;
}

void Character::displayCharacterInfo()
{
  cout << "|============|" << endl;
  cout << "Character Info" << endl;
  cout << "|============|" << endl;
  cout << characterName << endl;
  cout << "XP:" << characterXP << endl;
  cout << "Level: " << characterLevel << endl;
}