#pragma once
#define BIT(x) 1 << x

namespace DLENG {
	enum class EventCategory {
		None = 0,
		Window = BIT(0),
		Mouse = BIT(1),
		Keyboard = BIT(2),
		Input = BIT(4)
	};

	enum EventType {
		None = 0,
		WindowClose, WindowFocus, WindowLoseFocus, WindowResize, WindowMinimize,
		MouseButtonPress, MouseButtonRelease, MouseButtonClick,
		KeyPress, KeyRelease, KeyRepeat, KeyInput
	};

	class Event {
	public:
		Event();
		~Event();

	private:
		bool _handled = false;
		EventType _type = None;
		EventCategory _category = EventCategory::None;
	};
}