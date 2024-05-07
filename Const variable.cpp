// C++ program to show difference between
// definition and declaration of a 
// variable
#include <iostream>
using namespace std;

int main()
{
	const int int_const=6;		
	const float float_const=10.5;
	const char char_const='F';
	cout<<int_const <<"\n" <<float_const << "\n" << char_const<<endl;
	return 0;
}

