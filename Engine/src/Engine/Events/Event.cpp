#include "Event.h"

DLENG::Event::Event(u_char type, u_long category):
	_type(type), _category(category)
{
}

DLENG::Event::~Event()
{
}
