#include "Character.h"
#include <sqlite3.h>

Character::Character()
{
  characterName = "";
  characterLevel = 1;
  characterXP = 0;
  characterAttack = 1;
  characterStrength = 1;
  characterDefense = 1;
}

Character::Character(string name, int xp, int level, int attack, int strength, int defense) 
{
  characterName = name;
  characterXP = xp;
  characterLevel = level;
  characterAttack = attack;
  characterStrength = strength;
  characterDefense = defense;
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
  createCharacterTable();
  cout << "Please enter character name: \n";
  cin >> characterName;
}

void Character::displayCharacterInfo()
{
  if (characterName.empty()) {
    getInput();
  }
  system("clear");
  cout << "|============================|" << endl;
  cout << "NAME:" << characterName << endl;
  cout << "LEVEL:" << characterLevel << " XP:" << characterXP << endl;
  cout << "ATK:" << characterAttack << " STR:" << characterStrength << " DEF:" << characterDefense << endl;
  cout << "|============================|" << endl;
}

void Character::createCharacterTable()
{
  sqlite3* DB;
  string characterSQL = "CREATE TABLE CHARACTER("
                        "ID INT PRIMARY KEY     NOT NULL"
                        "NAME           TEXT    NOT NULL"
                        "LEVEL          INT     NOT NULL"
                        "XP             INT     NOT NULL"
                        "ATTACK         INT     NOT NULL"
                        "STRENGTH       INT     NOT NULL"
                        "DEFENSE        INT     NOT NULL);";
  int exit = 0;
  exit = sqlite3_open("character.db", &DB);

  if (exit != SQLITE_OK)
  {
    cerr << "Error Create Table" << endl;
  }
  else 
  {
    cout << "Table Created Successfully" << endl;
    sqlite3_close(DB);
  }
}