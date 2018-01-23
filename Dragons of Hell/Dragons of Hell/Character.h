#pragma once

enum {
	up,
	down,
	left,
	right
};

class Character
{
public:
	Character();
	~Character();
	Move();
private:
	int m_hp;
};

