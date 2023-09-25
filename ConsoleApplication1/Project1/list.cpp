#include "header.h"
#include "list.h"
#include <algorithm>

void ls::level1()
{
	list<int> mylist;
	int i = 0;
	cout << "input 5 integer numbers: " << endl;
	for (int cnt = 0; cnt < 5; cnt++) {
		cout << "input number" << cnt + 1 << ": ";
		cin >> i;
		mylist.push_back(i);
		cout << endl;
	}
	for (auto it = mylist.begin(); it != mylist.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

void ls::level2()
{
	list<int> mylist;
	int n = 0, input = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist.push_back(input);
	}
	int sum = 0;
	cout << "sum: ";
	for (auto it = mylist.begin(); it != mylist.end(); ++it) {
		sum += *it;
	}
	cout << endl;
	cout << sum; //합계
	cout << "avg: " << sum/mylist.size();
}

void ls::level3()
{
	list<int> mylist;
	int n = 0, input = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist.push_back(input);
	}
	cout << "sorting. . . ." << endl;
	mylist.sort();
	for (const auto& elem : mylist) {
		cout << elem << " ";
	}
	//이 for문 사용법 더 알아보기
}

void ls::level4()
{
	list<int> mylist;
	int n = 0, input = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist.push_back(input);
	}
	cout << "reversing . . . ." << endl;
	for (auto i = mylist.end(); i != mylist.begin(); --i) {
		cout << *i << " ";
	}
}

void ls::level5()
{
	list<int> mylist;
	int n = 0, input = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist.push_back(input);
	}
	mylist.sort();
	cout << "remove duplicated elements. . . ." << endl;
	mylist.unique();
	for (const auto& elem : mylist) {
		cout << elem << " ";
	}
}

void ls::level6()
{
	list<int> mylist1;
	list<int> mylist2;
	int n = 0, input = 0;
	cout << "list1: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist1.push_back(input);
	}
	cout << "\nlist2:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist2.push_back(input);
	}
	cout << "mylist1 length: " << mylist1.size() << ", mylist2: " << mylist2.size()<<endl;
	for (int i = 0; i < mylist2.size(); i++) {
		list<int>::iterator it = mylist2.begin();//iterator 호출
		advance(it, i); //iterator를 i만큼 움직임
		mylist1.push_back(*it);
	}
	mylist2.clear(); //원소를 전부 비움 = 메모리 해제 = 그러나 유효한 빈 리스트 객체
	for (const auto& elem : mylist1) {
		cout << elem << " ";
	}
}

void ls::level7()
{
	list<int> mylist;
	int n = 0, input = 0, k=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		mylist.push_back(input);
	}
	for (const auto& elem : mylist) {
		cout << elem << " ";
	}
	cout << "\nhow many times do you want to rotate?: ";
	cin >> k;
	cout << "\nwhich direction do you want to rotate?(L, R): ";
	char d = 0;
	cin >> d;
	switch (d) {
		case 'l':
		case 'L':
			rotate(mylist.begin(), next(mylist.begin(),k), mylist.end());
			break;
		case 'r':
		case 'R':
			rotate(mylist.rbegin(), next(mylist.rbegin(), k), mylist.rend());
			break;
		default:
			cout << "something's wrong\n";
			break;
	}
	for (const auto& elem : mylist) {
		cout << elem << " ";
	}
}

void ls::level8()
{
}

void ls::level9()
{
}

void ls::level10()
{
}
