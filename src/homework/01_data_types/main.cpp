//write include statements
#include "data_types.h"// tells c++ where to finda multiply numbers function
#include<iostream>

//write namespace using statement for cout
using std::cout; using std::cin;

int main()
{
	int num;
	cout<<"Enter a Number";
	cin>>num;

	int result = multiply_numbers(num);
	cout<< "results: "<<result<<"\n";
	
	int num1=4;

	result = multiply_numbers(num1);
	cout<< "results: "<<result<<"\n"; 
	
	return 0;
}
