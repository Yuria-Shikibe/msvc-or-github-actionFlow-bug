#include <chrono>
#include <iostream>
#include <thread>

import ChronoTest;

int main(){
	std::this_thread::sleep_for(std::chrono::microseconds(10));

	Test::Test02 test02{};
	std::cout << test02.getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20)) << std::endl;
	return 0;
}
