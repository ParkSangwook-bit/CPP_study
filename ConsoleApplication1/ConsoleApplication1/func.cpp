#include "header.h"
#include "func.h"
#include <stdarg.h>

void fn::level1() {
	int a = 0, b = 0;
	cout << "정수 2개 입력" << endl;
	cin >> a >> b;

	cout << "answer: " << a + b << endl;

}

void fn::level2(){
	int a = 0, b = 0;
	cout << "정수 2개 입력" << endl;
	cin >> a >> b;
	cout << "answer: " << a * b;
}

void fn::level3(){
	int a = 0, b = 0, c = 0;
	cout << "정수 3개 입력" << endl;
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
	double c = 1.0, d = 2.0;
	cout << add(a, b) << add(c, d) << endl;
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
	cout << factorial(a);
	
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

int avg(int num_args, ...); //Prototype function
int avg(int num_args, ...) { //Define function
	va_list ap;
	va_start(ap, num_args); //ap�� ���� ù ��° �����μ��� ����ų �� �ֵ��� �ʱ�ȭ
	int arg = 0, result = 0;
	for (int i = 0; i < num_args; i++) {
		arg = va_arg(ap, int); //�ݺ����� �����鼭 ���ڰ��� �Ѱ��� �޾ƿ�
		result += arg;
	}
	result = result / num_args;
	va_end(ap);//�������� ��� ����
	return result;
};

void fn::level8(){
	int a = 1, b = 2, c = 3, d = 4;
	cout << "avg func : " << avg(4, a, b, c, d) << endl;
	//4는 num_args. 반드시 첫 번째 인자로 가변 인자의 개수를 제공
}

template <typename T>
void var_swap(T& a, T& b) { //a와 b를 전달하기만 하면, 내부에서만 값이 바뀜. 따라서 포인터로 가리켜야 함.
	T temp;
	temp = a;
	a = b;
	b = temp;
}

void fn::level9(){
	int a = 5, b = 10;
	cout << "a10 5, b=10" << endl;
	var_swap(a, b);
	cout << "swapped! now a = " << a << ", b = " << b << endl;
}

typedef bool (*compareptr)(int, int);

bool ascending(int a, int b) {
	return a > b;
}

bool descending(int a, int b) {
	return a < b;
}

void bubblesort(int arr[], int size, compareptr cmp) {
	//int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (cmp(arr[j], arr[j + 1])) {
				//swap
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void fn::level10(){
	int arr[] = { 1,2,5,3,9,0 };
	int size = sizeof(arr) / sizeof(int);
	cout << "original array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "bubble sorting . . . " << endl;
	bubblesort(arr, size, ascending);
	cout << "sorted array - ascend: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubblesort(arr, size, descending);
	cout << "sorted array - descend: " << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
} // feat. GPT
/*
레벨 10에서 콜백함수가 적용된 부분은
버블소트에서 인자로 정해지지 않은 값을 비교하는 ascending, descending 함수가 쓰이고 있다.
그리고 해당 함수 인자가 사용되는 곳은 버블 소트의 내부의 정렬 직전 값 비교에서 cmp라는 함수포인터로써 쓰이고 있다.
이렇게 콜백함수가 적용되어 있다.
*/

