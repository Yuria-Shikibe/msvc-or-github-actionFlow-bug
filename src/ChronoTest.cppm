export module ChronoTest;

import <chrono>;

export namespace Test{
	auto getSpacing(const std::chrono::milliseconds p1, const std::chrono::milliseconds p2){
		return p1 - p2;
	}
}
