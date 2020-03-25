#include <iostream>
using namespace std;

double add (double firstOperand, double secondOperand)
{
	return firstOperand+secondOperand;
}

double subtract (double firstOperand, double secondOperand)
{
	return firstOperand-secondOperand;
}

double multiply (double firstOperand, double secondOperand)
{
	return firstOperand*secondOperand;
}

double divide (double firstOperand, double secondOperand)
{
	return firstOperand/secondOperand;
}

int selectOperation(char candidateOperator)
{
	if (candidateOperator == '+')
	{
		return 1;
	}
	if (candidateOperator == '-')
	{
		return 2;
	}
	if (candidateOperator == '*')
	{
		return 3;
	}
	if (candidateOperator == '/')
	{
		return 4;
	}
	return 5;
}

int main (int argc, char ** argv)
{
    double firstOperand;
    double secondOperand;
    double result;
	char candidateOperator;
	int sign;
	if (argc != 4)
	{
        cout << "Wrong number of parameters" << endl;
		return -3;
	}
	firstOperand = atof(argv[1]);
	secondOperand = atof(argv[3]);
	if (firstOperand == 0 || secondOperand == 0)
	{
        cout << "Zero is not allowed for either operand!" << endl;
		return -1;
	}
	sign = selectOperation(*argv[2]);
	if (sign == 5)
	{
		cout << "Please select +, -, *, or / for the second argument." << endl;
		return -2;
	}
	if (sign == 1)
	{
		result = add(firstOperand,secondOperand);
	}
	if (sign == 2)
	{
		result = subtract(firstOperand,secondOperand);
	}
	if (sign == 3)
	{
		result = multiply(firstOperand,secondOperand);
	}
	if (sign == 4)
	{
		result = divide(firstOperand,secondOperand);
	}
	cout << result << endl;
    return 0;
}