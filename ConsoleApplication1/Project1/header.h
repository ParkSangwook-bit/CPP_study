#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <algorithm>
#include <typeinfo>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

template <typename T>
string getType(T var) {
	return typeid(var).name();
}