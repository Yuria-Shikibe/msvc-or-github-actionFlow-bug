#include <chrono>
#include <thread>
//Include above the import or beneath it both cause this problem
//If uses all module+head unit / all include head file, this error doesn't pop

//Local Compile doesn't have any failure
//But fails in Github Workflow
//Use Both MSVC 17.9.5+33de0b227

// Only Module triggers compile failure, currently
import ChronoTest;
// #include "src/chrono_test.h"

int main(){
	//must invoke this, should be the problem of -/+ operation between std::chrono::duration;
	std::this_thread::sleep_for(std::chrono::microseconds(10));

	//This getSpacing Function is an additional condition, maybe
	Test::getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20));
	return 0;
}
