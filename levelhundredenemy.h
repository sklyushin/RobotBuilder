#ifndef LEVELTWOENEMY_H
#define LEVELTWOENEMY_H

#include "builder.h"

class LevelHunderedEnemy : public Builder
{
public:
    LevelHunderedEnemy() {}

    virtual IEngine* getEngine() override { return new SimpleEngine; }
    virtual IArm* getRightArm() override { return new IronArm; }
    virtual IArm* getLeftArm() override { return new IronArm; }
    virtual ILegs* getRightLeg() override { return nullptr; }
    virtual IWeapon* getRightArmWeapon() override { return new LaserShotgun; }
    virtual IWeapon* getLeftArmWeapon() override { return new LaserShotgun; }
    virtual IWheels* getWheels() override { return new SpikedWheels; }
    virtual IArmor* getArmor() override { return nullptr; }
};

#endif // LEVELTWOENEMY_H
