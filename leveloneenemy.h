#ifndef LEVELONEENEMY_H
#define LEVELONEENEMY_H

#include <builder.h>

class LevelOneEnemy : public Builder
{
public:
    LevelOneEnemy() {}

    virtual IEngine* getEngine() override { return new NuclearEngine; }
    virtual IArm* getRightArm() override { return new IronArm; }
    virtual IArm* getLeftArm() override { return nullptr; }
    virtual ILegs* getRightLeg() override { return nullptr; }
    virtual IWeapon* getRightArmWeapon() override { return new LaserShotgun; }
    virtual IWeapon* getLeftArmWeapon() override { return nullptr; }
    virtual IWheels* getWheels() override { return new SpikedWheels; }
    virtual IArmor* getArmor() override { return nullptr; }
};

#endif // LEVELONEENEMY_H
