#include "Enemy.h";

Enemy::Enemy()
{
  enemyName = "";
  enemyLevel = 0;
}

Enemy::Enemy(string name, int level)
{
  enemyName = name;
  enemyLevel = level;
}

void Enemy::setEnemyName(string name)
{
  enemyName = name;
}

void Enemy::setEnemyLevel(int level)
{
  enemyLevel = level;
}

string Enemy::getEnemyName()
{
  return enemyName;
}

int Enemy::getEnemyLevel()
{
  return enemyLevel;
}