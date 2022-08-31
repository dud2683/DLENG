#pragma once
#include "Events/Event.h"
#include <queue>
namespace DLENG {
	class EventHandler {
	public:
		EventHandler();
		~EventHandler();
		void AddEvent(Event ev);
	private:
		std::queue<Event> _events;
	};
}
