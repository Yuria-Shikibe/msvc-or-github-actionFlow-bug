#include <chrono>
#include <iostream>

import ChronoTest.T01;
import ChronoTest.T02;

int main(){
	Test::Test01 test01{};
	std::cout << test01.getSpacing(std::chrono::milliseconds(10), std::chrono::microseconds(20)) << std::endl;
	std::cout << test01.getSpacing(std::chrono::microseconds(10), std::chrono::nanoseconds(20)) << std::endl;
	return 0;
}
