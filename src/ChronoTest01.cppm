export module ChronoTest.T01;

import <chrono>;

export namespace Test{
	struct Test01 {
		auto getSpacing(auto p1, auto p2){
			return p1 - p2;
		}
	};
}
