#include "header.h"
#include "map.h"
#include <algorithm>

//Map Initialization : 빈 map을 생성하고, 문자열을 key로, 정수를 value로 가지는 5개의 key - value 쌍을 삽입하고 출력해보세요.
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


//Element Access : map에서 특정 key에 대응하는 value를 찾아서 출력해보세요.
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

//Map Iteration : map의 모든 원소를 순회하면서 key와 value를 출력해보세요.
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

//Map Size and Clear: map의 크기를 확인한 후, 모든 원소를 제거하고 크기를 다시 확인해보세요.
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

//Element Removal : map에서 특정 key를 가진 원소를 제거해보세요.
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

//Key Existence : 주어진 key가 map에 존재하는지 확인하는 코드를 작성해보세요.
void mp::level6()
{
	map<string, int> myMap;
	myMap["me"] = 23;
	myMap["friend1"] = 24;
	myMap["friend2"] = 25;
	myMap["friend3"] = 34;
	myMap["frined4"] = 27;

	cout << "Is there friend3?" << endl;
	auto it = myMap.find("friend3");	//find()
	if (it != myMap.end()) cout << "friend3! you there!" << endl; //if there are no value, return `end()` iterator

	cout << "Is there friend2?" << endl;	//count()
	if(myMap.count("friend2")) cout << "friend2! you there!" << endl; //bool value
}
//Value Accumulation : map을 순회하며 value의 총합을 구해보세요.
void mp::level7()
{
	map<string, int> myMap;
	int mapSum = 0;
	myMap.insert(make_pair("Alice", 25));
	myMap["Mike"] = 35;
	myMap.emplace("John", 12);
	myMap.insert_or_assign("Alice", 20);

	for (auto it = myMap.begin(); it != myMap.end(); ++it) {
		mapSum += it->second;
		cout << "Key: " << it->first << " | Value: " << it->second << endl;
	}
	cout << "Sum of Map's value: " << mapSum;
}

//Map Sorting : map은 기본적으로 key를 기준으로 정렬됩니다.value를 기준으로 정렬된 새로운 map을 생성해보세요.
void mp::level8()
{
	map<string, int> initMap;
	map<int, string> outputMap;

	// add elements to initMap
	initMap["me"] = 23;
	initMap["friend1"] = 24;
	initMap["friend2"] = 25;
	initMap["friend3"] = 34;
	initMap["frined4"] = 27;

	cout << "Transplanting init map to output map. [<string, int> -> <int, string>] . . . " << endl;

	for (auto& pair : initMap) {
		outputMap[pair.second] = pair.first;
	}

	for (auto& pair : outputMap) {
		cout << "Key: " << pair.first << " | Value: " << pair.second << endl;
	}
	//interested point: when pair.first is <int>, they are ordered by key's numerical size
}

map<int, int> findintersection(const map<int, int>& mp1, const map<int, int>& mp2) {
	map<int, int> intersection;
	for (auto& pair : mp1) {
		if ((mp2.find(pair.first) != mp2.end()) && (mp2.at(pair.first) == pair.second)) {
			intersection[pair.first] = pair.second;
		}
	}

	return intersection;
}

//Map Intersection : 두 개의 map에서 공통된 key만을 가진 새로운 map을 생성해보세요.
void mp::level9()
{
	std::map<int, int> map1 = { {1, 2}, {2, 3}, {3, 4} };
	std::map<int, int> map2 = { {2, 3}, {3, 4}, {4, 5} };

	map<int, int> intersection = findintersection(map1, map2);

	for (const auto& pair : intersection) {
		cout << "Key: " << pair.first << " | Value: " << pair.second << endl;
	}
}

//Custom Comparator : custom comparator를 사용하여 key의 정렬 순서를 변경해보세요.
void mp::level10()
{

}


/*
고급
*/

/*
주요 특징:
정렬된 상태: std::map은 키를 기준으로 항상 정렬된 상태를 유지합니다.
고유한 키: 각 키는 고유해야 합니다. 같은 키를 가진 원소를 추가하면 기존 원소의 값이 업데이트됩니다.
동적 크기: std::map은 동적으로 크기가 조절되므로 사전에 크기를 지정할 필요가 없습니다.
키-값 접근: 키를 통해 값을 빠르게 찾을 수 있습니다.
다양한 자료형: 키와 값은 다양한 자료형을 사용할 수 있습니다.

주요 함수:
begin(), end(): map을 순회하는 반복자를 반환합니다.
size(): map에 저장된 원소의 수를 반환합니다.
empty(): map이 비어있는지 확인합니다.
insert(): 새로운 키-값 쌍을 삽입합니다.
erase(): 특정 키나 반복자를 가진 원소를 삭제합니다.
find(): 특정 키를 가진 원소를 찾아 반복자를 반환합니다.
operator[]: 키를 통해 값에 접근하거나 수정합니다.
*/