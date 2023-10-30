#include "header.h"
#include "map.h"
#include <algorithm>

//Map Initialization : �� map�� �����ϰ�, ���ڿ��� key��, ������ value�� ������ 5���� key - value ���� �����ϰ� ����غ�����.
void mp::level1()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << ": " << it->second << endl;
	}
	//in `map`, key is called `first` and value is called `second`
	//they are saved in std::pair type in local.
	//if there is a map called 'ageMap', it has map<string, int> type. and become std::pair<const std::string, int> type.
}


//Element Access : map���� Ư�� key�� �����ϴ� value�� ã�Ƽ� ����غ�����.
void mp::level2()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	cout << myMap["me"] << endl;
	cout << myMap["friend1"] << endl;
}

//Map Iteration : map�� ��� ���Ҹ� ��ȸ�ϸ鼭 key�� value�� ����غ�����.
void mp::level3()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << ": " << it->second << endl;
	}
}

//Map Size and Clear: map�� ũ�⸦ Ȯ���� ��, ��� ���Ҹ� �����ϰ� ũ�⸦ �ٽ� Ȯ���غ�����.
void mp::level4()
{
	map<string,int> myMap;
	myMap.insert(make_pair("Alice", 25));
	myMap["Mike"] = 35;
	myMap.emplace("John", 12);
	myMap.insert_or_assign("Alice", 20);

	cout << myMap.size() << endl;

	for(auto it = myMap.begin(); it != myMap.end(); /* empty increment */) { //because iterator will be nullified in next repeat.
		it = myMap.erase(it); //this it will be point next iterator
	}
	// this for phrase have exactly same function with `myMap.clear()`
	cout << myMap.size() << endl;

}

//Element Removal : map���� Ư�� key�� ���� ���Ҹ� �����غ�����.
void mp::level5()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	cout << "initial map: " << endl;
	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << ": " << it->second << endl;
	}

	cout << "erase friend1 . . . " << endl;
	myMap.erase("friend1");

	cout << "map after erase: " << endl;
	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		cout << it->first << ": " << it->second << endl;
	}
}

//Key Existence : �־��� key�� map�� �����ϴ��� Ȯ���ϴ� �ڵ带 �ۼ��غ�����.
void mp::level6()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	cout << "Is there friend3?" << endl;
	auto it = myMap.find("friend3");
	if (it != myMap.end()) cout << "friend3! you there!" << endl; //if there are no value, return `end()` iterator

	cout << "Is there friend2?" << endl;
	if(myMap.count("friend2")) cout << "friend2! you there!" << endl; //bool value
}

void mp::level7()
{
}

void mp::level8()
{
}

void mp::level9()
{
}

void mp::level10()
{
}


/*
�߱�
Value Accumulation: map�� ��ȸ�ϸ� value�� ������ ���غ�����.

���
Map Sorting: map�� �⺻������ key�� �������� ���ĵ˴ϴ�. value�� �������� ���ĵ� ���ο� map�� �����غ�����.
Map Intersection: �� ���� map���� ����� key���� ���� ���ο� map�� �����غ�����.
Custom Comparator: custom comparator�� ����Ͽ� key�� ���� ������ �����غ�����.
*/

/*
�ֿ� Ư¡:
���ĵ� ����: std::map�� Ű�� �������� �׻� ���ĵ� ���¸� �����մϴ�.
������ Ű: �� Ű�� �����ؾ� �մϴ�. ���� Ű�� ���� ���Ҹ� �߰��ϸ� ���� ������ ���� ������Ʈ�˴ϴ�.
���� ũ��: std::map�� �������� ũ�Ⱑ �����ǹǷ� ������ ũ�⸦ ������ �ʿ䰡 �����ϴ�.
Ű-�� ����: Ű�� ���� ���� ������ ã�� �� �ֽ��ϴ�.
�پ��� �ڷ���: Ű�� ���� �پ��� �ڷ����� ����� �� �ֽ��ϴ�.

�ֿ� �Լ�:
begin(), end(): map�� ��ȸ�ϴ� �ݺ��ڸ� ��ȯ�մϴ�.
size(): map�� ����� ������ ���� ��ȯ�մϴ�.
empty(): map�� ����ִ��� Ȯ���մϴ�.
insert(): ���ο� Ű-�� ���� �����մϴ�.
erase(): Ư�� Ű�� �ݺ��ڸ� ���� ���Ҹ� �����մϴ�.
find(): Ư�� Ű�� ���� ���Ҹ� ã�� �ݺ��ڸ� ��ȯ�մϴ�.
operator[]: Ű�� ���� ���� �����ϰų� �����մϴ�.
*/