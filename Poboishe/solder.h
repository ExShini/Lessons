#ifndef SOLDER_H
#define SOLDER_H

class Solder
{
public:
    Solder();
    Solder(int ID, int type, int helth, int power): m_IDking(ID), m_type(type), m_helht(helth), m_power(power){}

    int m_IDking;
    int m_type;
    int m_helht;
    int m_power;
};

#endif // SOLDER_H
