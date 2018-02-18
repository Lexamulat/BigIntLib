#include<iostream>
#include<string>
#include <vector>
#include<cstdint>
#include <algorithm>
#include<cmath>

using namespace std;


void StrBin(string &input, string &support, vector<int>& array1, int &num, int&curr, bool &end, bool&f) {

	if (end == 1) {
		return;
	}
	if (input[0] == '1') {
		f = 1;
	}
	for (int i = 0; i < input.length(); i++) {

		num = input[i] - 48;

		if ((curr == 0) && (f == 0)) {
			curr = num % 2;

			if (i == 0) {
				support = ((num / 2) + 48);
			}
			else {
				support += ((num / 2) + 48);
			}
		}
		else if (f == 0) {
			curr = (curr * 10) + num;
			support += ((curr / 2) + 48);
			curr = curr % 2;
		}
		else if (f == 1) {
			curr = 1;
			f = 0;
		}

	}



	array1.insert(array1.end(), curr);
	if ((support.length() < 2) && ((support[0] - 48) < 2)) {
		array1.insert(array1.end(), (support[0] - 48));
		end = 1;
		return;
	}
	else {
		input = support;
		support.clear();

		curr = 0;
		StrBin(input, support, array1, num, curr, end, f);
	}
}

void summ(vector<int>& array1, vector<int>& array2,bool&z1,bool&z2) {



}





int main() {

	//
	vector<int> array1;
	vector<int> array2;
	string input1,input2;
	string support;
	bool end = 0;
	cout << "enter 1" << endl;
	cin >> input1;
	/*cout << "enter 2" << endl;
	cin >> input2;*/
	int curr = 0;
	int num;
	bool f = 0;
	bool z1=0;
	if (input1[0] == '-') {
		z1 = 1;
	}
	/*bool z2= 0;
	if (input2[0] == '-') {
		z1 = 1;
	}
*/
	input1.erase(0, 1);
	//input2.erase(0, 1);

	cout <<"inp1:" <<input1 << endl;
	
	StrBin(input1, support,array1,num,curr,end,f);
	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}
	cout << endl << "-----" << endl;
	reverse(std::begin(array1),std::end(array1));
	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}


	//curr = 0;
	//f = 0;
	//StrBin(input2, support, array2, num, curr, end, f);


	//for (int i = 0; i < array1.size(); i++) {
	//		cout << array1[i];
	//	}






	system("pause");
	return 0;

}