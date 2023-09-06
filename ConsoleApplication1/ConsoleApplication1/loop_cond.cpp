#include "loop_cond.h"

void lc::level1() {
	int var = 0;
	cout << "������ �ϳ� �Է� �ϼ���: " << endl;
	cin >> var;
	//nested way
	if (var - (int)var == 0) {
		if (var > 0) {
			cout << "�� ������ ����Դϴ�." << endl;
		}
		else if (var < 0) {
			cout << "�� ������ �����Դϴ�." << endl;
		}
		else {
			cout << "�� ������ 0�Դϴ�." << endl;
		}
	}
	else {
		cout << "�Է��� ������ ������ �ƴմϴ�." << endl;
	}
}

void lc::level2(){
	int score = 0;
	cin >> score;
	if (score >= 90) {
		cout << "A" << endl;
	}
	else if (score >= 80 && score < 90) {
		cout << "B" << endl;
	}
	else if (score >= 70 && score < 80) {
		cout << "C" << endl;
	}
	else if (score >= 50 && score < 70) {
		cout << "D" << endl;
	}
	else if (score < 50) {
		cout << "Fail" << endl;
	}
}

void lc::level3() {
	int age = 0;
	char gen;
	cin >> gen >> age;
	if (gen == 'm') {
		if (age <= 20) {
			cout << "under, male" << endl;
		}
		else {
			cout << "adult, male" << endl;
		}
	}
	else if(gen == 'f') {
		if (age <= 20) {
			cout << "under, female" << endl;
		}
		else {
			cout << "adult, female" << endl;
		}
	}
	//char gen = 0; -> char gen;
}

void lc::level4() {
	int temp = 0;
	for (int i = 1; i <= 10; i++) {
		temp += i;
	}
	cout << temp <<endl;
}

void lc::level5() {
	int var = 0;
	cin >> var;
	while(var >= 1) {
		var *= var;
		var--;
	}
	cout << var << endl;
}

void lc::level6() {
	string str = "";
	do {
		cin >> str;
		cout << "Ok" << endl;
	} while (str != "good bye" || str != "goodbye");
	cout << "Good Bye!" << endl;
}

void lc::level7() {

	int day =0;

	cin >> day;
	switch (day) {
	case 1:
		cout << "monday" << endl;
		break;
	case 2:
		cout << "tuesday" << endl;
		break;
	case 3:
		cout << "wednesday" << endl;
		break;
	case 4:
		cout << "thursday" << endl;
		break;
	case 5:
		cout << "friday" << endl;
		break;
	case 6:
		cout << "saturday" << endl;
		break;
	case 7:
		cout << "sunday" << endl;
		break;
	default:
		cout << ":(" << endl;
		break;
	}
}

void lc::level8() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
	}
}

void lc::level9() { //�����佺�׳׽��� ä with GPT
	for (int i = 2; i <= 100; i++) {
		bool isPrime = true;
		for (int j = 1; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
			if (isPrime) {
				cout << i << " ";
			}
		}
	}
}
//----------------------------------------------------------
/*
�������׳׽��� ä�� wheel�� �������� �̷��� Ȱ����.
���� Ǭ�� �ƴ�.
�Ʒ� �Ҽ��Ǻ����� 2,3,5,7�� ����� wheel�� �ϴ� �Ҽ��Ǻ����̸�, 11�� ����� �Ǻ����� ����.
*/
bool isPrime(int num) {
	if (num <= 1) return false;
	if (num <= 3) return true;

	if (num % 2 == 0 || num % 3 == 0) return false;

	for (int i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i + 2) == 0) return false;
	}

	return true;
}

int findClosestPrime(int num) {
	int lowerPrime = num - 1;
	int upperPrime = num + 1;

	while (true) {
		if (isPrime(lowerPrime)) return lowerPrime;
		if (isPrime(upperPrime)) return upperPrime;

		lowerPrime--;
		upperPrime++;
	}
}
void lc::level10() {

	int var = 0;
	cin >> var;

	if (isPrime(var)) {
		std::cout << var << "��(��) �Ҽ��Դϴ�.\n";
	}
	else {
		int closestPrime = findClosestPrime(var);
		std::cout << var << "��(��) �Ҽ��� �ƴմϴ�. ���� ����� �Ҽ��� " << closestPrime << "�Դϴ�.\n";
	}
}