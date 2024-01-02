#include "header.h"
#include "set.h"

/*
set()은 중복을 허용하지 않는 하나의 값만을 갖는 집합이다.
*/

//기본 삽입 및 순회 - std::set에 원소를 삽입하고, 반복자를 사용하여 원소들을 순회해 출력하는 기본적인 연습을 해보세요.
void st::level1()
{
	set<int> mySet;
	mySet.insert(2);
	mySet.insert(2);
	mySet.insert(1);
	mySet.insert(3);
	mySet.insert(5);

	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it <<endl;
	}
	//the Set was ordered in ascended automatically and don't allow duplicate
}

//특정 원소 찾기 - 주어진 원소가 std::set에 존재하는지 확인하고, 그 결과를 출력하세요.
void st::level2()
{
	set<int> mySet;
	mySet.insert(2);
	mySet.insert(2);
	mySet.insert(1);
	mySet.insert(3);
	mySet.insert(5);

	//mySet.find() method return iterator which points the element's location. if it's not exist, return end()
	auto it = mySet.find(1);	//it = std::set::iterator
	if (it != mySet.end()) {
		cout << "1 is at " << *it << endl;
	}
	else {
		cout << "coudln't find 1" << endl;
	}
}

//원소 삭제 - std::set에서 특정 원소를 삭제하는 방법을 실습해보세요.
void st::level3()
{
	set<int> mySet;
	mySet.insert(1);
	mySet.insert(2);
	mySet.insert(3);

	int n = 2;

	auto it = mySet.find(2);
	mySet.erase(2);
	for (auto it = mySet.begin(); it != mySet.end(); ++it) {
		cout << *it << endl;
	}
}

//범위에 따른 원소 삭제 - std::set에서 lower_bound와 upper_bound를 사용하여 특정 범위의 원소를 삭제하는 실습을 해보세요.
void st::level4()
{
	set<int> mySet;
	for (int i = 0; i <= 10; i++) {
		mySet.insert(i);
		//0~10 insertion
	}



}

void st::level5()
{
}

void st::level6()
{
}

void st::level7()
{
}

void st::level8()
{
}

void st::level9()
{
}

void st::level10()
{
}

/*




역방향 순회 - rbegin과 rend를 사용하여 std::set의 원소를 역순으로 순회하는 방법을 실습해보세요.

원소 개수 세기 - std::set 내의 특정 원소의 개수를 세어보세요 (무조건 0 또는 1이 될 것입니다, 중복이 없기 때문에).

복사 및 비교 - 하나의 std::set을 다른 std::set에 복사하고 두 집합을 비교하는 연습을 해보세요.

합집합, 교집합, 차집합 - 두 std::set의 합집합, 교집합, 차집합을 구하는 알고리즘을 구현해보세요.

사용자 정의 타입 - 사용자 정의 객체를 저장하는 std::set을 만들고, 이를 정렬하기 위해 비교자를 사용하는 방법을 실습해보세요.

멀티셋 - std::multiset을 사용하여 중복을 허용하는 집합을 실습해보세요. 이를 통해 std::set과 std::multiset의 차이점을 이해할 수 있습니다.
*/