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
	(number%10+number/10)%2==false ? cout<<"����� ������ 2" : cout<<"����� �� ������ 2";
	return 0;
}
