#include "Big.h"
#include <string>
#include<iostream>
#include <vector>
#include <memory>

using namespace std;


big::big(string &input) {

	set_num(input);
}

big::big(vector<int> &array1) {
	for (int i = 0; i < array1.size(); i++) {
		(*array).insert((*array).end(), array1[i]);

	}
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

void big::FindBiggest(std::vector<int> &array1, std::vector<int> &array2,int &biggest) {

		for (int i = 0; i < array1.size(); i++) {
			if (array1[i] > array2[i]) {
				biggest = 1;
				break;
			}
			else if (array1[i] < array2[i]) {
				biggest = 2;
				break;
			}
		}
	
}

vector<int> big::VecSumm(std::vector<int> &array1, std::vector<int> &array2) {
	vector<int> result;

	NormalLenght(array1,array2);
	
		int curr;
		int buff=0;
		for (int i = array1.size()-1; i > -1;i--) {
			curr = (array1[i] + array2[i])+buff;
			if (curr < 10) {
				result.insert(result.begin(), curr);
				buff = 0;
	
			}
			else {
				result.insert(result.begin(), (curr%10));
				buff = curr/10;
			}
		
		}
	
		if (buff != 0) {
			result.insert(result.begin(), buff);
		}

		return result;
}

big big::summ(big &num1,big &num2) {
	vector<int> result = VecSumm((*num1.array), (*num2.array));
	big out(result);
		return out;

}

big big::diff(big &num1, big &num2) {
	int biggest = 0;
	int buff = 0;
	int curr;
	vector<int> result;
	NormalLenght((*num1.array), (*num2.array));
	FindBiggest((*num1.array), (*num2.array),biggest);

	if (biggest == 1) {
				for (int i = (*num1.array).size() - 1; i > -1; i--) {
					curr = ((*num1.array)[i]-buff) - (*num2.array)[i];
					if (curr<0) {
						curr = ((10 + (*num1.array)[i]-buff) - (*num2.array)[i]);
						buff = 1;
					}
				

					else if (curr>=0) {
						buff = 0;
						
					}
					result.insert(result.begin(), curr);
				}
				cout << endl << "+" << endl;
			}
		
			if (biggest == 2) {
				for (int i = (*num1.array).size() - 1; i > -1; i--) {
					curr = ((*num2.array)[i] - buff) - (*num1.array)[i];
					if (curr<0) {
						curr = ((10 + (*num2.array)[i]) - (*num1.array)[i]);
						buff = 1;
					}
					else if (curr >= 0) {
						buff = 0;
		
					}
					result.insert(result.begin(), curr);
				}
			
			
				cout << endl << "-" << endl;
			
			}
		
			if (biggest == 0) {
			
				result.insert(result.begin(), 0);
			}
			while (result[0] == 0) {
				result.erase(result.begin() + 0);
			}
		
			/*cout << endl << "--------------result----------------------------" << endl;
		
			for (int i = 0; i < result.size(); i++) {
				cout << result[i];
			}*/

			big out(result);
			return out;
}
  

//void Diff(vector<int>& array1, vector<int>& array2, vector<int>& result) {
//	result.clear();
//	int buff=0;
//	int curr;
//	//////////////////////////////////////////////////////
//	int raz = (array1.size() - array2.size());
//	if (array1.size() > array2.size()) {
//
//		for (int i = 0; i <raz; i++) {
//			array2.insert(array2.begin(), 0);
//
//		}
//
//	}
//	else if (array1.size() < array2.size()) {
//
//		for (int i = 0; i < (raz*(-1)); i++) {
//			array1.insert(array1.begin(), 0);
//
//		}
//	}
//	////////////////////////////////////////////////////////      normal sizes
//	int big=0;
//	for (int i = 0; i < array1.size(); i++) {
//		if (array1[i] > array2[i]) {
//			big = 1;
//			break;
//		}
//		else if (array1[i] < array2[i]) {
//			big = 2;
//			break;
//		}
//	}
//	///////////////////////////////////////////////////////   find   the biggest num 
//
//	if (big == 1) {
//		for (int i = array1.size() - 1; i > -1; i--) {
//			curr = (array1[i]-buff) - array2[i];
//			if (curr<0) {
//				curr = ((10 + array1[i]) - array2[i]);
//				buff = 1;
//			}
//			else if (curr>=0) {
//				buff = 0;
//				
//			}
//			result.insert(result.begin(), curr);
//		}
//		cout << endl << "+" << endl;
//	}
//
//	if (big == 2) {
//		for (int i = array1.size() - 1; i > -1; i--) {
//			curr = (array2[i] - buff) - array1[i];
//			if (curr<0) {
//				curr = ((10 + array2[i]) - array1[i]);
//				buff = 1;
//			}
//			else if (curr >= 0) {
//				buff = 0;
//
//			}
//			result.insert(result.begin(), curr);
//		}
//	
//	
//		cout << endl << "-" << endl;
//	
//	}
//
//	if (big == 0) {
//	
//		result.insert(result.begin(), 0);
//	}
//
//	/*cout << endl << "--------------result----------------------------" << endl;
//
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i];
//	}*/