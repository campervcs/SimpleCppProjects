//============================================================================
// Name        : FrstProjects.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int number;
	cin>>number;
	(number%10+number/10)%2==false ? cout<<"Число кратно 2" : cout<<"Число не кратно 2";
	return 0;
}
