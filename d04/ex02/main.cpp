#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	{
		std::cout << "=======  Constructor test" << std::endl;
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;

		std::cout << "============ Index and count" << std::endl;
		std::cout << vlc->push(bob) << std::endl;
		std::cout << vlc->getCount() << std::endl;

		std::cout << "============ Same Object " << std::endl;
		std::cout << vlc->push(jim) << std::endl;
		std::cout << vlc->getCount() << std::endl;
		std::cout << vlc->push(jim) << std::endl;
		std::cout << vlc->getCount() << std::endl;

		std::cout << "=========== New Object Index test" << std::endl;
		std::cout << vlc->push(new AssaultTerminator) << std::endl;
		std::cout << vlc->push(new TacticalMarine) << std::endl;

		std::cout << vlc->getCount() << std::endl;

		std::cout << "============ Attack test" << std::endl;
		vlc->getUnit(0)->battleCry();
		vlc->getUnit(1)->battleCry();

		vlc->getUnit(0)->rangedAttack();
		vlc->getUnit(1)->rangedAttack();

		vlc->getUnit(0)->meleeAttack();
		vlc->getUnit(1)->meleeAttack();

		std::cout << "============= Not Exist test" << std::endl;
		std::cout << vlc->getUnit(8) << std::endl;

		std::cout << "=========== Delete test" << std::endl;
		delete vlc;
		// delete bob;
		// delete jim;
	}


	std::cout << "=============  Required test" << std::endl;
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	return 0;
}
