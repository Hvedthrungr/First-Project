#include "Character.h"



Character::Character()
{
	int Move()
	{
		get PlayerPos;
			switch case()
			{
			case up:
					NewPos = get square(PlayerPos + 1y);
			case down:
					NewPos = get square(PlayerPos - 1y);
			case right:
					NewPos = get square(PlayerPos + 1x);
			case left:
					NewPos = get square(PlayerPos - 1x);
			default:
					NewPos = get square(PlayerPos);
			}
		if (!IsWall)
		{
			PlayerPos = NewPos
		}
		Time + 1
	}
}


Character::~Character()
{
}
