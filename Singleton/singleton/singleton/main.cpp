#include "MySingleton.h"
#include<iostream>
using namespace std;


int main() {
	int num = MySingleton::Instance()->GetVal();
	
	cout << num;
}