#pragma once
#include "Event.h"

namespace DLENG {
	class KeyEvent : public Event {
	public:
		KeyEvent(int key, int scancode, int action, int mode);
	private:
		int _key;
		int _scancode;
		int _action;
		int _mode;
	};
}