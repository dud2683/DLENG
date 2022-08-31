#pragma once
#define BIT(x) 1 << x

namespace DLENG {
	namespace EventEnums {
		enum EventCategory {
			None = 0,
			Window = BIT(0),
			Mouse = BIT(1),
			Keyboard = BIT(2),
			Input = BIT(4)
		};

		enum class EventType {
			None = 0,
			WindowClose, WindowFocus, WindowLoseFocus, WindowResize, WindowMinimize,
			MouseButtonPress, MouseButtonRelease, MouseButtonClick,
			KeyPress, KeyRelease, KeyRepeat, KeyInput
		};
	}
	class Event {
	public:
		typedef unsigned long long int u_long;
		typedef unsigned char u_char;
		Event(u_char type, u_long category);
		~Event();

	private:
		bool _handled = false;
		u_char _type = EventEnums::None;
		u_long  _category = EventEnums::None;
	};
}