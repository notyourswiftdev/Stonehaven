#include "Character.h"

int main() {
  Character character;
  string quitGame;

  character.getInput();
  character.displayCharacterInfo();

  while (quitGame != "quit")
  {
    getline(cin, quitGame);
  }
  cout << "Game Quit!" << endl;
  return 0;
}