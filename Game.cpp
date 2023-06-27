#include <iostream>

#include "Character.h"

using namespace std;

int main()
{
  int choice;
  bool gameOn = true;
  Character character;
  
  cout << "**********************\n";
  cout << " 1 - Start the game.\n";
  cout << " 2 - Choose new character.\n";
  cout << " 3 - Help.\n";
  cout << " 4 - Exit.\n";
  cout << " Enter your choice and press enter: ";

  while (gameOn != false)
  {
    cin >> choice;
    switch (choice)
    {
    case 1:
      character.displayCharacterInfo();
      break;
    case 2:
      cout << "New Character.\n";
      break;
    case 3:
      cout << "Help Screen!\n";
      break;
    case 4:
      gameOn = false;
      break;
    default:
      cout << "Not a valid choice. \n";
      cout << "Choose again!.\n";
      cin >> choice;
      break;
    }
  }
  return 0;
}