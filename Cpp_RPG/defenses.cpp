#include "defenses.h"

Parade::Parade() : Defense(5, 0, 0, 0)
{

}

WaterWall::WaterWall() : Defense(0, 5, 0, 0)
{

}

FireWall::FireWall() : Defense(0, 0, 5, 0)
{

}

WindShield::WindShield() : Defense(0, 0, 0, 5)
{

}
