#ifndef KING_H
#define KING_H
#include "list"
#include "solder.h"
#include "enums.h"
#include "ArmyFactory.h"

using namespace std;

class King
{
public:
    King(int ID, ERace race);
    void yourTurn();

private:
    ERace m_race;
    list<Solder*> m_Warriors1;
    list<Solder*> m_Warriors2;
    list<Solder*> m_Warriors3;
    ArmyFactory* m_factory;
    int m_ID;
};

#endif // KING_H
