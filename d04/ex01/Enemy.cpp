#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, const std::string& type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy& inst)
{
	*this = inst;
}

Enemy::~Enemy()
{
}

Enemy&	Enemy::operator=(const Enemy& inst)
{
	if (this != &inst) {
		_hp = inst._hp;
		_type = inst._type;
	}
	return *this;
}

const std::string	Enemy::getType() const
{
	return _type;
}

int	Enemy::getHP() const
{
	return _hp;
}

void	Enemy::takeDamage(int n)
{
	if (n < 0) {
		return ;
	} else if (_hp - n <= 0) {
		_hp = 0;
	} else {
		_hp -= n;
	}
}
