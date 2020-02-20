#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int value = 0;
	for (int i = 1; i < argc; i++)
	{
		value+=atoi(argv[i]);
	}
	cout << value << endl;
}