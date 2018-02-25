#pragma once
#include <vector>
#include <string>
#include <memory>



class big {

public:
void NormalLenght(std::vector<int> &array1, std::vector<int> &array2);
void set_num(std::string &input);
void get_num();
big big::summ(big num1, big num2, big &out);


private:

	std::vector<int> array;
	

};

