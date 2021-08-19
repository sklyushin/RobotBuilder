#include <iostream>
#include <vector>

#include <robot.h>
#include <leveloneenemy.h>
#include <levelhundredenemy.h>
#include <robotadjuster.h>

int main() {
    std::vector<Robot> enemies;

    LevelOneEnemy levelOneEnemy;
    LevelOneEnemy levelHundredEnemy;

    RobotAdjuster director;

    enemies.push_back(director.buildRobot(&levelOneEnemy));
    enemies.push_back(director.buildRobot(&levelHundredEnemy));

    return 0;
}
