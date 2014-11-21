#include "king.h"
#include "armyfactoryrome.h"
#include <cstddef>

King::King(int ID, ERace race): m_race(race), m_ID(ID)
{
    switch (race) {
    case eRome:
        m_factory = new ArmyFactoryRome(ID);
        break;
    case eGrek:
        m_factory = NULL;
        break;
    case eTatar:
        m_factory = NULL;
        break;
    default:
        m_factory = NULL;
        break;
    }
}
void King::yourTurn()
{
    const int nNewSoldersW1 = 26; // ahalaiamahalai
    const int nNewSoldersW2 = 34;
    const int nNewSoldersW3 = 41;

    for(int iW = 0; iW < nNewSoldersW1; ++iW)
        m_Warriors1.push_back(m_factory->getWarrior1());
    for(int iW = 0; iW < nNewSoldersW2; ++iW)
        m_Warriors2.push_back(m_factory->getWarrior2());
    for(int iW = 0; iW < nNewSoldersW3; ++iW)
        m_Warriors3.push_back(m_factory->getWarrior3());


}
