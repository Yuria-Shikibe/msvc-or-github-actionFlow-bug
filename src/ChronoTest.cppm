export module ChronoTest;

import <chrono>;

export namespace Test{
	struct Test02 {
		auto getSpacing(const std::chrono::milliseconds p1, const std::chrono::milliseconds p2) const {
			return p1 - p2;
		}
	};
}
