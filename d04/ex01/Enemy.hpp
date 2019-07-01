#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
public:
	Enemy(int hp, const std::string& type);
	Enemy(const Enemy& inst);
	virtual ~Enemy();

	Enemy& operator=(const Enemy& inst);

	const std::string	getType() const;
	int					getHP() const;

	virtual void	takeDamage(int n);

protected:
	Enemy();

	int			_hp;
	std::string	_type;
};

#endif