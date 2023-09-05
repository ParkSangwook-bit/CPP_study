#include "header.h"
#include "var.h"
/*
level 1:
practicing about declare variable and initialize variable

Q: declare a int type var and assign  `10` and print that variable's value.

level 2:
practice changing variable's value and printing value of variable.

Q: make a program which declare one int type variable, and assign `10` and change to `20` and printing changed value. 

level 3:
practicing to receive a input from user and save to a variable.

level 4:
practicing changing between values of two variable.

Q. make a program which receive a int type variable, save that value to the variable and print the saved value.

level 5:
understanding and practicing scope of variable.

Q. explain the difference between global variable and local variable and write codes of each examples.
*/

//level 1
void var::level1() {
	int num = 0;
	num = 10;
	cout << num << endl;
}

void var::level2() {
	int num = 0;
	num = 10;
	cout << num << endl;
	num = 20;
	cout << num << endl;
}

void var::level3() {
	int num = 0;
	cin >> num;
	cout << num << endl;
}

void var::level4() {
	int num1 = 0, num2 = 0;
	num1 = 10;
	num2 = 20;
	int swap = 0;
	swap = num1;
	num1 = num2;
	num2 = swap;
	cout << num1 << ',' << num2 << endl;
}

void var::level5() {
	int global = 10;
	for (int i = 1; i <= 10; i++) {
		int local = i;
		cout << "local: " << local << endl;
	}
	cout << "global: " << global << endl;
}

