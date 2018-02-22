#include<iostream>
#include<string>
#include <vector>
#include<cstdint>
#include <algorithm>
#include<cmath>

using namespace std;


bool StrToVect(string &input, vector<int>& array) {


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
		array.insert(array.end(), input[i] - 48);

	}
	return znk;
}


void Summ(vector<int>& array1, vector<int>& array2, vector<int>& result) {
	int curr;
	int buff=0;

	int raz = (array1.size() - array2.size());
	if (array1.size() > array2.size()) {
	
		for (int i = 0; i <raz;i++){
			array2.insert(array2.begin(), 0);
		
		}
	
	}
	else if (array1.size() < array2.size()) {
	
		for (int i = 0; i < (raz*(-1)); i++) {
			array1.insert(array1.begin(), 0);

		}
	}

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

	cout << endl << "--------------result----------------------------" << endl;


	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
	}


/*
	cout <<endl<< "------------------------------------------" << endl;


	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}
	cout <<endl<< "------------------------------------------" << endl;
	for (int i = 0; i < array2.size(); i++) {
		cout << array2[i];
	}
	cout <<endl<< "------------------------------------------" << endl;*/
}









int main() {

	
	vector<int> array1;
	vector<int> array2;
	vector<int> result;
	string input1,input2;
	bool z1 = 0, z2 = 0;
	cout << "enter 1" << endl;
	cin >> input1;
	cout << "enter 2" << endl;
	cin >> input2;

	
	z1=StrToVect(input1, array1);
	z2 = StrToVect(input2, array2);

	cout << endl << z1 << endl;

	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}
	cout << endl << z2 << endl;

	for (int i = 0; i < array2.size(); i++) {
		cout << array2[i];
	}


	Summ(array1,array2,result);

	/*for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}
	cout << endl << "-----" << endl;
	reverse(std::begin(array1),std::end(array1));
	for (int i = 0; i < array1.size(); i++) {
		cout << array1[i];
	}


	curr = 0;
	f = 0;
	end = 0;

	cout << endl << "2str" << endl;
	cout << "inp2:" << input2 << endl;
	StrBin(input2, support, array2, num, curr, end, f);
	

	


	for (int i = 0; i < array2.size(); i++) {
		cout << array2[i];
	}
	cout << endl << "-----" << endl;
	reverse(std::begin(array2), std::end(array2));
	for (int i = 0; i < array2.size(); i++) {
		cout << array2[i];
	}

	summ(array1,array2,z1,z2);*/


	system("pause");
	return 0;

}