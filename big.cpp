#include "Big.h"
#include <string>


using namespace std;

void big::set_num(std::string &input)
{
	
	bool znk = 0;
	if (input[0] == '-') {
		znk = 1;
		input.erase(0, 1);

	}
	if (input[0] == '+') {
		znk = 0;
		input.erase(0, 1);

	}

	for (int i = 0; i < input.length(); i++) {
		(array).insert((array).end(), input[i] - 48);

	}
	
}

void big::get_num() {



}