#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <algorithm>
#include <typeinfo>

template <typename T>
string getType(T var) {
	return typeid(var).name();
}