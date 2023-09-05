#include "header.h"
#include "dt.h"

void dt::level1() {
	int var = 0;
	var = 10;
	cout << "data  type of \'var\': " << getType(var) << endl;
 }

void dt::level2() {
	double var = 0.0;
	var = 20.5;
	cout << "data  type of \'var\': " << getType(var) << endl;
}

void dt::level3(){
	char var = 0;
	var = 'A';
	cout << "data  type of \'var\': " << getType(var) << endl;
}

void dt::level4() {
	bool var = false;
	var = true;
	cout << "data  type of \'var\': " << getType(var) << endl;
}
void dt::level5() {
	string var = "";
	cout << "data  type of \'var\': " << getType(var) << endl;
}

void dt::level6() {
	int arr[5] = { 1,2,3,4,5 };
	cout << "data  type of \'arr\': " << getType(arr) << endl;
}

void dt::level7() {
	double var = 0.0;
	double *adrs = &var;
	cout << "data  type of \'arr\': " << getType(var) << endl;
}

void dt::level8() {
	char var = 0;
	cin >> var;
	cout << "data  type of \'arr\': " << getType(var) << endl;
}

void dt::level9() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	int sum = var1 + var2;
	cout << sum << endl;
}

void dt::level10() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	int mul = var1 * var2;
	cout << mul<< endl;
}
/*
int main() {
	dt::level1();
	dt::level2();
	dt::level3();
	dt::level4();
	dt::level5();
	dt::level6();
	dt::level7();
	dt::level8();
	dt::level9();
	dt::level10();
}
*/