#include <chrono>
#include <thread>
//Include above the import or beneath it both cause this problem

//Local Compile doesn't have any failure
//But fails in Github Workflow
//Use Both MSVC 17.9.5+33de0b227

// Haven't Test Include Header File yet
// Only Module triggers compile failure, currently
import ChronoTest;

int main(){
	//must invoke this, should be the problem of -/+ operation between std::chrono::duration;
	std::this_thread::sleep_for(std::chrono::microseconds(10));

	//This getSpacing Function is an additional condition, maybe
	Test::getSpacing(std::chrono::milliseconds(10), std::chrono::milliseconds(20));
	return 0;
}
