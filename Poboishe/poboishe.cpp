#include "poboishe.h"
#include <stdlib.h>
Poboishe::Poboishe()
{

}

void Poboishe::pushSolder(unsigned int IdKing, Solder* pSolder)
{
    if(m_aArmyCollection.size() - 1 < IdKing)
        m_aArmyCollection.resize(IdKing+1);

    m_aArmyCollection[IdKing]->push_back(pSolder);
}

void Poboishe::yourTurn()
{
    for(unsigned int i = 0; i < m_aArmyCollection.size(); ++i)
    {
        list<Solder*>* paLuckies = new list<Solder*>();
        for(list<Solder*>::iterator j = m_aArmyCollection[i]->begin(); j != m_aArmyCollection[i]->end(); ++j)
        {
            const int damage = rand()%10 + 10;
            Solder* pp = static_cast<Solder*>(*j);
            pp->m_helht -= damage;
            if(pp->m_helht > 0)
                paLuckies->push_back(pp);

        }
        m_aArmyCollection[i]->clear();
        delete m_aArmyCollection[i];
        m_aArmyCollection[i] = paLuckies;
    }
    // TODO: notify
}
