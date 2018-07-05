#ifndef KOALABOT_H
#define KOALABOT_H

#include <string>
#include "Parts.h"

class KoalaBot
{
private:
	Arms _arms;
	Legs _legs;
	Head _head;
	std::string _serial;

public:
	KoalaBot(std::string serial = "Bob-01");
	~KoalaBot();
	void setParts(Arms &_arms);
	void setParts(Legs &_legs);
	void setParts(Head &_head);

	void swapParts(Arms &_arms);
	void swapParts(Legs &_legs);
	void swapParts(Head &_head);

	void informations() const;
	bool status() const;
};

#endif
