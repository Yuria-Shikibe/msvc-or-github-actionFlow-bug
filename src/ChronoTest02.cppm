export module ChronoTest.T02;

import <chrono>;

export namespace Test{
	struct Test02 {
		int test;
		auto getSpacing(std::chrono::milliseconds p1, std::chrono::milliseconds p2){
			test--;
			return p1 - p2;
		}
	};
}
