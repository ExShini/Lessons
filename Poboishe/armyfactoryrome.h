#ifndef ARMYFACTORYROME_H
#define ARMYFACTORYROME_H
#include "ArmyFactory.h"

class ArmyFactoryRome : public ArmyFactory
{
public:
    ArmyFactoryRome(int kingId) : ArmyFactory(kingId) {}

    virtual Solder* getWarrior1();
    virtual Solder* getWarrior2();
    virtual Solder* getWarrior3();
};

#endif // ARMYFACTORYROME_H
