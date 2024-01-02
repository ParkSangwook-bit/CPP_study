#include "header.h"
#include "set.h"

/*
set()�� �ߺ��� ������� �ʴ� �ϳ��� ������ ���� �����̴�.
*/

//�⺻ ���� �� ��ȸ - std::set�� ���Ҹ� �����ϰ�, �ݺ��ڸ� ����Ͽ� ���ҵ��� ��ȸ�� ����ϴ� �⺻���� ������ �غ�����.
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

//Ư�� ���� ã�� - �־��� ���Ұ� std::set�� �����ϴ��� Ȯ���ϰ�, �� ����� ����ϼ���.
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

//���� ���� - std::set���� Ư�� ���Ҹ� �����ϴ� ����� �ǽ��غ�����.
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

//������ ���� ���� ���� - std::set���� lower_bound�� upper_bound�� ����Ͽ� Ư�� ������ ���Ҹ� �����ϴ� �ǽ��� �غ�����.
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




������ ��ȸ - rbegin�� rend�� ����Ͽ� std::set�� ���Ҹ� �������� ��ȸ�ϴ� ����� �ǽ��غ�����.

���� ���� ���� - std::set ���� Ư�� ������ ������ ������� (������ 0 �Ǵ� 1�� �� ���Դϴ�, �ߺ��� ���� ������).

���� �� �� - �ϳ��� std::set�� �ٸ� std::set�� �����ϰ� �� ������ ���ϴ� ������ �غ�����.

������, ������, ������ - �� std::set�� ������, ������, �������� ���ϴ� �˰����� �����غ�����.

����� ���� Ÿ�� - ����� ���� ��ü�� �����ϴ� std::set�� �����, �̸� �����ϱ� ���� ���ڸ� ����ϴ� ����� �ǽ��غ�����.

��Ƽ�� - std::multiset�� ����Ͽ� �ߺ��� ����ϴ� ������ �ǽ��غ�����. �̸� ���� std::set�� std::multiset�� �������� ������ �� �ֽ��ϴ�.
*/