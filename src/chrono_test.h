//
// Created by Matrix on 2024/3/13.
//

#ifndef CHRONO_TEST_H
#define CHRONO_TEST_H

#include <chrono>

namespace Test{
	auto getSpacing(const std::chrono::milliseconds p1, const std::chrono::milliseconds p2){
		return p1 - p2;
	}
}

#endif //CHRONO_TEST_H
