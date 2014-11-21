#ifndef ARMYFACTORY_H
#define ARMYFACTORY_H
#include "solder.h"

class ArmyFactory
{
public:
    ArmyFactory(int kingId): m_kingID(kingId) {}

    virtual Solder* getWarrior1() = 0;
    virtual Solder* getWarrior2() = 0;
    virtual Solder* getWarrior3() = 0;
protected:
    int m_kingID;
};

#endif // ARMYFACTORY_H
