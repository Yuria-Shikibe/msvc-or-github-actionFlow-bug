#include <chrono>
#include <iostream>
#include <thread>

// import ChronoTest;

struct Test02 {
	auto getSpacing(const std::chrono::milliseconds p1, const std::chrono::milliseconds p2) const {
		return p1 - p2;
	}
};

int main(){
	std::this_thread::sleep_for(std::chrono::microseconds(10));

	Test02 test02{};
	std::cout << test02.getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20)) << std::endl;
	return 0;
}
