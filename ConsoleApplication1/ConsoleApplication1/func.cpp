#include "header.h"
#include "func.h"

void fn::level1() {
	int a = 0, b = 0;
	cout << "숫자 2개" << endl;
	cin >> a >> b;

	cout << "answer: " << a + b << endl;

}

void fn::level2(){
	int a = 0, b = 0;
	cout << "숫자 2개" << endl;
	cin >> a >> b;
	cout << "answer: " << a * b;
}

void fn::level3(){
	int a = 0, b = 0, c = 0;
	cout << "숫자 3개" << endl;
	cin >> a >> b >> c;
	cout << "answer:" << (a * b * c) / 3 << endl;
}

int add(int a, int b) {
	return a + b;
}

double add(double a, double b) {
	return a + b;
}

void fn::level4(){
	//function overloading: 같은 이름의 함수를 여러개 정의할 수 있도록 한다.
	int a = 1, b = 2;
	double a = 1.0, b = 2.0;
	cout << add(1, 2) << add(1.0, 2.0) << endl;
}

int factorial(int n) {
	if (n == 0) { //base case
		return 1;
	}
	return n * factorial(n-1); //recursive case
}

void fn::level5(){
	/*
	base case: 재귀가 끝나는 조건, 즉 함수가 자기 자신을 더는 호출하지 않고 값을 반환하는 경우
	recursive case: 함수가 자기 자신을 다시 호출하는 경우
	*/
	int a = 0;
	cout << "recursive func. enter 1 number: ";
	cin >> a;
	factorial(a);
}

void fn::level6(){
	int arr[] = { 1, 2, 3, 4, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	auto doubleValue = [](int& x) {x *= 2; }; //lambda
	for (int i = 0; i < size; ++i) {
		doubleValue(arr[i]);
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void fn::level7(){
	auto add = [](int a, int b) {return a + b;};
	auto sub = [](int a, int b) {return a - b; };
	int (*funcPtr1)(int, int) = add;
	int (*funcPtr2)(int, int) = sub;

	int sum = funcPtr1(3, 4);
	int subbed = funcPtr2(3, 4);
	cout << sum << ", " << subbed << endl;
}

void fn::level8(){

}

void fn::level9(){

}

void fn::level10(){

}

