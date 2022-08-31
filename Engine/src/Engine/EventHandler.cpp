#include "EventHandler.h"

DLENG::EventHandler::EventHandler()
{
}

DLENG::EventHandler::~EventHandler()
{
}

void DLENG::EventHandler::AddEvent(Event ev)
{
	_events.push(ev);
}
