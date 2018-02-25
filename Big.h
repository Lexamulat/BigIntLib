#pragma once
#include <vector>
#include <string>
#include <memory>



class big {

public:
	big(std::string &input);
void NormalLenght(std::vector<int> &array1, std::vector<int> &array2);
void set_num(std::string &input);
void get_num();
void summ(big &num1, big &num2);


private:

	std::vector<int> array;
	
	//std::unique_ptr<vector<int>> array;
};

