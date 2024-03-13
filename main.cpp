#include <chrono>
#include <iostream>
#include <thread>

struct Test01 {
	auto getSpacing(auto p1, auto p2){
		return p1 - p2;
	}
};

struct Test02 {
	int test;
	auto getSpacing(std::chrono::milliseconds p1, std::chrono::milliseconds p2){
		test--;
		return p1 - p2;
	}
};

int main(){
	// Test01 test01{};
	// std::cout << test01.getSpacing(std::chrono::milliseconds(10), std::chrono::microseconds(20)) << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::this_thread::sleep_for(std::chrono::microseconds(100));
	std::this_thread::sleep_for(std::chrono::nanoseconds(100));

	// Test02 test02{};
	// std::cout << test02.getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20)) << std::endl;

	return 0;
}
