/*
#include <iostream>
#include <string>
#include <algorithm> //for `reverse()` function
using namespace std;

int main()
{
	string str1 = "";
	cout << "이 프로그램은 문자열을 반대로 출력하는 프로그램입니다.\n \'hello\'를 입력해보세요!\n";
	cin >> str1;
	//using `for` loop
	for (int i = str1.length() - 1; i >= 0; i--) {
		cout << str1[i];
	}
	cout << endl;
	//using `reverse()`
	reverse(str1.begin(), str1.end());
	cout << str1;

	return 0;
}
*/