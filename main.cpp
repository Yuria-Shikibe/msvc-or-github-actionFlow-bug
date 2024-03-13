#include <chrono>
#include <iostream>
#include <thread>

import ChronoTest.T01;
import ChronoTest.T02;

int main(){
	Test::Test01 test01{};
	std::cout << test01.getSpacing(std::chrono::milliseconds(10), std::chrono::microseconds(20)) << std::endl;

	std::this_thread::sleep_for(std::chrono::microseconds(10));

	std::cout << test01.getSpacing(std::chrono::microseconds(10), std::chrono::nanoseconds(20)) << std::endl;

	Test::Test02 test02{};
	std::cout << test02.getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20)) << std::endl;
	return 0;
}
