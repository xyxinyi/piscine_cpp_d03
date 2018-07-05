#include "KoalaBot.h"

KoalaBot::KoalaBot(std::string serial)
{
	_serial = serial;
}

KoalaBot::~KoalaBot()
{
	
}

void	KoalaBot::setParts(Arms &arms)
{
	_arms = arms;
}

void	KoalaBot::setParts(Legs &legs)
{
	_legs = legs;
}

void	KoalaBot::setParts(Head &head)
{
	_head = head;
}

void	KoalaBot::swapParts(Arms &arms)
{
	setParts(arms);
}

void	KoalaBot::swapParts(Legs &legs)
{
	setParts(legs);
}

void	KoalaBot::swapParts(Head &head)
{
	setParts(head);
}

void	KoalaBot::informations() const
{
	std::cout << "[KoalaBot] " << _serial << std::endl;
	_arms.informations();
	_legs.informations();
	_head.informations();
}

bool	KoalaBot::status() const
{
	return (_arms.isFunctionnal()
		&& _legs.isFunctionnal()
		&& _head.isFunctionnal());
}
