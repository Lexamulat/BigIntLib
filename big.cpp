#include "Big.h"
#include <string>
#include<iostream>
#include <vector>
#include <memory>

using namespace std;


big::big(string &input) {

	set_num(input);
}

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
		(*array).insert((*array).end(), input[i] - 48);

	}
	
	
}



void big::get_num() {

	for (int i = 0; i < (*array).size(); i++) {
				cout << (*array)[i];
			}

}



void big::NormalLenght(vector<int> &array1, vector<int> &array2) {

	int raz = (array1.size() - array2.size());
		if (array1.size() > array2.size()) {
	
			for (int i = 0; i <raz; i++) {
				array2.insert(array2.begin(), 0);
	
			}
	
		}
		else if (array1.size() < array2.size()) {
	
			for (int i = 0; i < (raz*(-1)); i++) {
				array1.insert(array1.begin(), 0);
	
			}
		}
}



void big::summ(big &num1,big &num2) {
	vector<int> result;

	NormalLenght(*num1.array, *num2.array);

	int curr;
	int buff = 0;
	for (int i = (*num1.array).size() - 1; i > -1; i--) {
		curr = ((*num1.array)[i] + (*num2.array)[i]) + buff;
		if (curr < 10) {
			result.insert(result.begin(), curr);
			buff = 0;

		}
		else {
			result.insert(result.begin(), (curr % 10));
			buff = curr / 10;
		}

	}

	if (buff != 0) {
		result.insert(result.begin(), buff);
	}
	cout << endl;
	cout << endl << "--------------result----------------------------" << endl;
	
	
		for (int i = 0; i < result.size(); i++) {
			cout << result[i];
		}


}
  