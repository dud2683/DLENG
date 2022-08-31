#include "KeyEvent.h"

DLENG::KeyEvent::KeyEvent(int key, int scancode, int action, int mode):
	Event(1, 1),
	_key(key), _scancode(scancode), _action(), _mode(mode)
{
	
}
