#include<iostream>
#include<string>
#include <vector>
#include<cstdint>
#include<cmath>

using namespace std;



void StrBin(string &input, string &support,vector<int>& array1,int &num, int&curr,bool &end, bool&f) {

	if (end == 1) {
		return;
	}
	if (input[0]=='1') {
		f = 1;
	}
	for (int i = 0; i < input.length(); i++){
	
		num = input[i] - 48;
		
		if ((curr == 0)&&(f==0)) {
			curr = num % 2;

			if (i == 0) {
				support = ((num / 2) + 48);
			}
			else  {
				support += ((num / 2) + 48);
			}
		}
		else if (f==0)  {
			curr = (curr*10)+num;
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
		array1.insert(array1.end(),(support[0] - 48));
		end = 1;
		return;
	}
	else {
		input = support;
		support.clear();
		
		curr = 0;
		StrBin(input, support, array1, num, curr,end,f);
	}
}







int main() {
	vector<int> array1;
	string input;
	string support;
	bool end = 0;
	cout << "enter the num" << endl;
	cin >> input;
	int curr = 0;
	int num;
	bool f = 0;
	
	StrBin(input, support,array1,num,curr,end,f);


	for (int i = 0; i < array1.size(); i++) {
			cout << array1[i];
		}


	int64_t first=0;

	for (int i = 0; i < array1.size(); i++) {

		first = first + array1[i] * pow(2, i);
	
	}
	array1.clear();

	cout << "-----------first-----------" << endl;
	cout << first << endl;

	string str = to_string(first);

	cout << "stroka:" << str << endl;
	curr = 0;
	end = 0;
	StrBin(str, support, array1, num, curr, end, f);
	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}

	first = 0;
	
	for (int i = 0; i < array1.size(); i++) {

		first = first + array1[i] * pow(2, i);

	}
	cout << "---------first-------------" << endl;
	cout << first << endl;

	system("pause");
	return 0;

}