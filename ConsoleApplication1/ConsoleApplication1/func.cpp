#include "header.h"
#include "func.h"

void fn::level1() {
	int a = 0, b = 0;
	cout << "���� 2��" << endl;
	cin >> a >> b;

	cout << "answer: " << a + b << endl;

}

void fn::level2(){
	int a = 0, b = 0;
	cout << "���� 2��" << endl;
	cin >> a >> b;
	cout << "answer: " << a * b;
}

void fn::level3(){
	int a = 0, b = 0, c = 0;
	cout << "���� 3��" << endl;
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
	//function overloading: ���� �̸��� �Լ��� ������ ������ �� �ֵ��� �Ѵ�.
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
	base case: ��Ͱ� ������ ����, �� �Լ��� �ڱ� �ڽ��� ���� ȣ������ �ʰ� ���� ��ȯ�ϴ� ���
	recursive case: �Լ��� �ڱ� �ڽ��� �ٽ� ȣ���ϴ� ���
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

