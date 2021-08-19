#ifndef ROBOT_H
#define ROBOT_H

#include <memory>
#include <iostream>

using namespace std;

class IEngine {};
class IArm {};
class IWeapon {};
class ILegs {};
class IWheels {};
class IArmor {};

class NuclearEngine : public IEngine {};
class SimpleEngine : public IEngine {};
class IronArm : public IArm {};
class LaserShotgun : public IWeapon {};
class SpikedWheels : public IWheels {};

class Robot {
public:
    Robot(
        IEngine* engine = nullptr,
        IArmor* armor = nullptr,
        IArm* right_arm = nullptr,
        IWeapon* right_arm_weapon = nullptr,
        IArm* left_arm = nullptr,
        IWeapon* left_arm_weapon = nullptr,
        ILegs* right_leg = nullptr,
        IWheels* wheels = nullptr
    ) {}

    void shoot(double x, double y) { /* ... */ }
    void move(double x, double y) { /* ... */ }

    IEngine* engine;
    IArmor* armor;
    IArm* right_arm;
    IWeapon* right_arm_weapon;
    IArm* left_arm;
    IWeapon* left_arm_weapon;
    ILegs* right_leg;
    IWheels* wheels;
};

#endif // ROBOT_H
