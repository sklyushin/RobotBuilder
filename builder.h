#ifndef BUILDER_H
#define BUILDER_H

#include <robot.h>

class Builder
{
public:
    Builder() {}

    virtual IEngine* getEngine() = 0;
    virtual IArm* getRightArm() = 0;
    virtual IArm* getLeftArm() = 0;
    virtual ILegs* getRightLeg() = 0;
    virtual IWeapon* getRightArmWeapon() = 0;
    virtual IWeapon* getLeftArmWeapon() = 0;
    virtual IWheels* getWheels() = 0;
    virtual IArmor* getArmor() = 0;
};

#endif // BUILDER_H
