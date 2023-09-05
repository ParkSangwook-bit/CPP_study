#include "header.h"
#include "op.h"
//2023.08.10
void op::level1() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	int sum = var1 + var2;
	cout << sum << endl;
	//feedback by GPT: 입력에 대한 유효성 검사가 필요. ex)정수가 아닌 값
}

void op::level2() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	int remain = var1 % var2;
	cout << remain << endl;
	//feedback by GPT: 0으로 나누는 경우에 대한 예외처리
}

void op::level3() {
	int var = 10;
	cout << "var is : " << var << endl;
	cout << var++ << endl;
	cout << var-- << endl;
	cout << endl;
	//feedback by GPT: 후위 증감 연산자 지양. 출력문구 추가.
}

void op::level4() {
	int var = 0;
	cin >> var;
	var *= 5;
	var += 3;
	cout << var << endl;
}

void op::level5() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	if (var1 > var2) {
		cout << "var1 is bigger than var2" << endl;
	}
	else if (var1 < var2) {
		cout << "var2 is bigger than var1" << endl;
	}
	else {
		cout << "it\'s same or something wrong www" << endl;
	}
	//feedback by GPT: 변수가 같은 상황에 대한 경우 등, 특정 조건에 대한 예외처리를 세분화
}

void op::level6() {
	int var1 = 0, var2 = 0, var3 = 0;
	cin >> var1 >> var2 >> var3;
	if (var1 > 0 && var2 > 0 && var3 > 0) {
		cout << "pass!" << endl;
	}
	else {
		cout << "u r wrong :(" << endl;
	}
}

void op::level7() {
	int var1 = 0, var2 = 0;
	while (var1 <= 0 || var2 <= 0) {
		cout << "두 양수를 입력하세요!" << endl;
		cin >> var1 >> var2;
	};
	int temp = 0;
	temp = var1 & var2;
	cout << "AND: " << temp << endl;
	temp = var1 | var2;
	cout << "OR: " << temp << endl;
	temp = var1 ^ var2;
	cout << "XOR: " << temp << endl;
	//feedback by GPT: 입력된 수가 양수인지 아닌지 유효성 검사 필요
}

void op::level8() {
	int var1 = 0, var2 = 0;
	cin >> var1 >> var2;
	int result = (var1 > var2) ? var1 : var2;
	cout << "The big one is: " << result << endl;
}

void op::level9() {
	int a = 5, b = 3, c = 2;
	int result = a + (b * c / 2);
	cout << "result: " << result << endl;
}

void op::level10() {
	/*
	복소수를 연산하기 위한 +연산자를 오버로딩하는 예제
	*/
	class Complex {
	public:
		Complex(double r, double i) : real(r), imag(i) {}

		Complex operator+(const Complex& other) const {
			return Complex(real + other.real, imag + other.imag);
		}
		double real;
		double imag;
	};
	//feedback by GPT: 검증 예제 코드가 필요.
}





