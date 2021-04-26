#ifndef DEFENSE_H
#define DEFENSE_H


class Defense
{
protected:
    int PhysicalDamageReduction = 0;
    int FireDamageReduction = 0;
    int IceDamageReduction = 0;
    int WindDamageReduction = 0;
public:
    Defense(int phDmgRed, int fireDmgRed, int iceDmgRed, int windDmgRed);

    int getPhysicalDamageReduction() const;
    void setPhysicalDamageReduction(int value);
    int getFireDamageReduction() const;
    void setFireDamageReduction(int value);
    int getIceDamageReduction() const;
    void setIceDamageReduction(int value);
    int getWindDamageReduction() const;
    void setWindDamageReduction(int value);
};

#endif // DEFENSE_H
