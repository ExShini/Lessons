#include "armyfactoryrome.h"
#include "enums.h"


Solder* ArmyFactoryRome::getWarrior1()
{
    const int power = 99;
    const int helth = 72;
    Solder* pSolder = new Solder(m_kingID, eRome, helth, power);
    return pSolder;
}
Solder* ArmyFactoryRome::getWarrior2()
{
    const int power = 51;
    const int helth = 82;
    Solder* pSolder = new Solder(m_kingID, eRome, helth, power);
    return pSolder;
}
Solder* ArmyFactoryRome::getWarrior3()
{
    const int power = 86;
    const int helth = 71;
    Solder* pSolder = new Solder(m_kingID, eRome, helth, power);
    return pSolder;
}
