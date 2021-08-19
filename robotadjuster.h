#ifndef ROBOTADJUSTER_H
#define ROBOTADJUSTER_H

#include <builder.h>

class RobotAdjuster
{
    Builder* builder;

public:
    RobotAdjuster() {}

    void setBuilder(Builder* newBuilder)
    {
        builder = newBuilder;
    }

    Robot buildRobot(Builder* builder)
    {
        Robot robot;

        robot.armor = builder->getArmor();
        robot.engine = builder->getEngine();

        robot.wheels = builder->getWheels();

        if (!robot.wheels)
            robot.right_leg = builder->getRightLeg();

        robot.left_arm = builder->getLeftArm();
        robot.right_arm = builder->getRightArm();

        if (robot.left_arm)
            robot.left_arm_weapon = builder->getLeftArmWeapon();
        if (robot.right_arm)
            robot.left_arm_weapon = builder->getRightArmWeapon();

        return robot;
    }
};

#endif // ROBOTADJUSTER_H
