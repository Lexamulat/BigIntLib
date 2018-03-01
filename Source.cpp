#include<iostream>
#include<string>
#include <vector>
#include<cstdint>
#include <algorithm>
#include<cmath>
#include "Big.h"


// Для обнаружения утечек памяти
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#ifdef _DEBUG
#ifndef DBG_NEW
#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define newDBG_NEW
#endif
#endif

using namespace std;

string check() {
	string str;
	bool  err = 1;
	int count;
//char a = '1';//49
//char b = '9';//57
//cout << (int)a << endl;
//cout << (int)b;

	//|| ((int)(str[0]>48)) || ((int)(str[0]<56)


	/*cin >> str;
	cout << (int)str[0] << endl;

	while (!((str[0]=='+')|| (str[0] == '-')|| ((int)(str[0]>48))  || ((int)(str[0]<56))))
	{
		cout << "incorrect expression\n"
			<< "try again\n";
		cin >> str;
	
	}

	while(err)
	for (int i = 0; i < str.length(); i++) {
		if () {
		
		}
	
	}
	*/


	return str;
}


void menu() {
	
	//big out;
	string input;

	cout << "enter 1" << endl;
 input= check();
	big num1(input);


	//num1.set_num(input);
	cout << endl << "-----------num1--------" << endl;
	num1.get_num();


	input.clear();
	cout << endl << "enter 2" << endl;
	cin >> input;
	big num2(input);

	//num2.set_num(input);
	cout << endl << "-----------num2--------" << endl;
	num2.get_num();
	cout << endl;
	////////////////---------------------------summ
	/*num1.summ(num1, num2);
	big out= num1.summ(num1, num2);
	out.get_num();*/




	//разность
	/*big out = num1.diff(num1, num2, PlaseOfCall);
	out.get_num();*/

	//умножение
	/*big out = num1.Prepair_for_Mult(num1, num2);
	out.get_num();
*/

//деление
/*bool CallAsMod = 0;
big out = num1.Division(num1, num2,CallAsMod);
out.get_num();*/


/////mod
	/*bool CallAsMod = 1;
	big out = num1.Division(num1, num2, CallAsMod);
	out.get_num();*/



	int Choise;
	//while (1) {
		cout << "Choose Action\n"
			<< "(1)Summ\n"
			<< "(2)Diff\n"
			<< "(3)Mult\n"
			<< "(4)Div\n"
			<< "(5)Mod\n"
			<< "(6)EXIT\n";

		cin >> Choise;

		switch (Choise)
		{
		case 1: {
			big out = num1.summ(num1, num2);
			out.get_num();
			break;
		}
		case 2: {
			bool PlaseOfCall = 1;
			big out = num1.diff(num1, num2, PlaseOfCall);
			out.get_num();
			break;
		}
		case 3: {
			big out = num1.Prepair_for_Mult(num1, num2);
			out.get_num();
			break;
		}
		case 4: {
			bool CallAsMod = 0;
			big out = num1.Division(num1, num2, CallAsMod);
			out.get_num();
			break;
		}
		case 5: {
			bool CallAsMod = 1;
			big out = num1.Division(num1, num2, CallAsMod);
			out.get_num();
			break;
		}
		case 6: {
			exit(0);
		}
		default: {
			cout << "incorrect expression\n"
				<< "try again\n";
		}
		}
//	}
}


int main() {

	menu();
	// Для обнаружения утечек памяти

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_ERROR, _CRTDBG_FILE_STDOUT);
	_CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_ASSERT, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();


	system("pause");
	return 0;
}













































//
//
//bool StrToVect(string &input, vector<int>& array) {
//
//
//	bool znk = 0;
//	if (input[0] == '-') {
//		znk = 1;
//		input.erase(0, 1);
//
//	}
//	if (input[0] == '+') {
//		znk = 0;
//		input.erase(0, 1);
//
//	}
//
//	for (int i = 0; i < input.length(); i++) {
//		array.insert(array.end(), input[i] - 48);
//
//	}
//	return znk;
//}
//
//
//
//void NormalLenght(vector<int>& array1, vector<int>& array2) {
//
//	////////////////////////////////////////////////////////////////////
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
//	////////////////////////////////////////////////////////////////////
//
//}
//
//
//void Summ(vector<int>& array1, vector<int>& array2, vector<int>& result) {
//	
//	NormalLenght(array1, array2);
//
//	int curr;
//	int buff=0;
//	for (int i = array1.size()-1; i > -1;i--) {
//		curr = (array1[i] + array2[i])+buff;
//		if (curr < 10) {
//			result.insert(result.begin(), curr);
//			buff = 0;
//
//		}
//		else {
//			result.insert(result.begin(), (curr%10));
//			buff = curr/10;
//		}
//	
//	}
//
//	if (buff != 0) {
//		result.insert(result.begin(), buff);
//	}
///*
//	cout << endl << "--------------result----------------------------" << endl;
//
//
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i];
//	}*/
//
//
//}
//
//
//
//
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
//}
//
//
//
//void Multiplication(vector<int> big, vector<int> small, vector<int>& result) {
//	vector<int> currentsumm;
//	vector<int> temp;
//	int nul = 0;
//	for (int i= small.size()-1; i >-1; i--) {
//		if (small[i] == 0) {
//			continue;
//		}
//		else if (small[i] == 1)
//		{
//			temp = big;
//		}
//		else{
//			temp = big;
//
//			for (int j = 0; j < (small[i] - 1); j++) {
//
//				Summ(temp, big, currentsumm);
//				temp = currentsumm;
//				currentsumm.clear();
//			}
//			
//
//	    }
//		for (int d = small.size() - 1; d >i; d--) {
//			temp.insert(temp.end(), 0);
//		}
//		currentsumm = result;
//		result.clear();
//		Summ(temp, currentsumm, result);
//		temp.clear();
//		currentsumm.clear();
//
//
//
//
//
//
//
//		/*temp.insert(temp.end(), 0);
//		if (nul == 1) {
//			temp.insert(temp.end(), 0);
//		}
//		
//
//		Summ(result, temp, result);
//		temp.clear();*/
//      
//	}
//
//
//
//	/*cout << endl << "--------------result----------------------------" << endl;
//
//
//	for (int i = 0; i < result.size(); i++) {
//	cout << result[i];
//	}*/
//
//
//}
//
//
//
//void Prepair_for_Mult(vector<int>& array1, vector<int>& array2, vector<int>& result) {
//	result.clear();
//	NormalLenght(array1, array2);
//	int big = 0;
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
//	if (big == 1) {
//
//		while (array2[0] == 0) {
//			array2.erase(array2.begin() + 0);
//		}
//
//		Multiplication(array1, array2, result);
//	}
//	else if (big==2) 
//	{
//		
//			while (array1[0] == 0) 
//			{
//				array1.erase(array1.begin() + 0);
//			}
//			
//		
//
//		Multiplication(array2, array1, result);
//	}
//	else Multiplication(array2, array1, result);
//
//}
//	
//
//
//	
//void Division(vector<int>& array1, vector<int>& array2, vector<int>& result) {
//	//условно считаем что первое число больше второго
//	vector<int> one;
//	int big = 0;
//
//	one.insert(one.end(), 1);
//	vector<int> answer;
//	answer.insert(answer.end(), 1);
//
//	while (big != 2) {
//
//		Prepair_for_Mult(array2, answer, result);
//		NormalLenght(array1, result);
//		for (int i = 0; i < array1.size(); i++) {
//			if (array1[i] > result[i]) {
//				big = 1;
//				break;
//			}
//			else if (array1[i] < result[i]) {
//				big = 2;
//				break;
//			}
//		}
//		if (big == 2) break;
//		result.clear();
//		Summ(answer, one, result);
//		answer = result;
//
//		result.clear();
//
//
//	}
//
//	Diff(answer, one, result);
//	/*cout << endl << "--------------result----------------------------" << endl;
//
//
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i];
//	}*/
//
//
//	/*Summ(answer, one, result);
//		answer = result;*/
//
//
//}
//
//
//void Mod(vector<int>& array1, vector<int>& array2, vector<int>& result) {
//
//	vector<int> one;
//	int big = 0;
//
//	one.insert(one.end(), 1);
//	vector<int> answer;
//	answer.insert(answer.end(), 1);
//
//	while (big != 2) {
//
//		Prepair_for_Mult(array2, answer, result);
//		NormalLenght(array1, result);
//		for (int i = 0; i < array1.size(); i++) {
//			if (array1[i] > result[i]) {
//				big = 1;
//				break;
//			}
//			else if (array1[i] < result[i]) {
//				big = 2;
//				break;
//			}
//		}
//		if (big == 2) break;
//		result.clear();
//		Summ(answer, one, result);
//		answer = result;
//
//		result.clear();
//
//
//	}
//
//	Diff(answer, one, result);
//	answer = result;
//	Prepair_for_Mult(array2, answer, result);
//	answer = result;
//	Diff(array1,answer,result);
//
//
//}
//
//
//
//int main() {
//
//	
//	vector<int> array1;
//	vector<int> array2;
//	vector<int> result;
//	string input1,input2;
//	bool z1 = 0, z2 = 0;
//	cout << "enter 1" << endl;
//	cin >> input1;
//	cout << "enter 2" << endl;
//	cin >> input2;
//
//	
//	z1=StrToVect(input1, array1);
//	z2 = StrToVect(input2, array2);
//
//	cout << endl << z1 << endl;
//
//	for (int i = 0; i < array1.size(); i++) {
//		cout << array1[i];
//	}
//	cout << endl << z2 << endl;
//
//	for (int i = 0; i < array2.size(); i++) {
//		cout << array2[i];
//	}
//
//
//	/*Summ(array1, array2, result);*/
//	/*Prepair_for_Mult(array1,array2,result);*/
//
//	Mod(array1, array2, result);
//
//
//	cout << endl << "-------------------rez------" << endl;
//	for (int i = 0; i < result.size(); i++) {
//		cout << result[i];
//	}
//
//
//
//	/*for (int i = 0; i < array1.size(); i++) {
//		cout << array1[i];
//	}
//	cout << endl << "-----" << endl;
//	reverse(std::begin(array1),std::end(array1));
//	for (int i = 0; i < array1.size(); i++) {
//		cout << array1[i];
//	}
//	//]]
//
//	curr = 0;
//	f = 0;
//	end = 0;
//
//	cout << endl << "2str" << endl;
//	cout << "inp2:" << input2 << endl;
//	StrBin(input2, support, array2, num, curr, end, f);
//	
//
//	
//
//
//	for (int i = 0; i < array2.size(); i++) {
//		cout << array2[i];
//	}
//	cout << endl << "-----" << endl;
//	reverse(std::begin(array2), std::end(array2));
//	for (int i = 0; i < array2.size(); i++) {
//		cout << array2[i];
//	}
//
//	summ(array1,array2,z1,z2);*/
//
//
//	system("pause");
//	return 0;
//
//}


