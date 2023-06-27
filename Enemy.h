#include <iostream>
#include <string>

using namespace std;

class Enemy 
{
  private:
    string enemyName;
    int enemyLevel;
  public:
    Enemy();
    Enemy(string, int);
    void setEnemyName(string);
    void setEnemyLevel(int);
    string getEnemyName();
    int getEnemyLevel();
};
