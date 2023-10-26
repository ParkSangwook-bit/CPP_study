#include "header.h"
#include "deque.h"
#include <algorithm>

void print_dq(deque<int>& dq) {
	for_each(dq.begin(), dq.end(), [](int n) {
		cout << n << " ";
		});
}

//Deque 초기화: 정수를 5개 저장할 수 있는 deque를 생성하고, 이를 출력하세요.
void dq::level1()
{
	deque<int> myDeque(5, 0); //size = 5, init_element = 0

	print_dq(myDeque);

	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
	});
}

//원소 추가와 삭제 : deque의 앞과 뒤에 정수를 각각 하나씩 추가하고, 이를 출력하세요.그 다음, 앞과 뒤의 원소를 각각 하나씩 삭제한 뒤 다시 출력하세요.
void dq::level2()
{
	deque<int> myDeque(1, 0);
	myDeque.push_back(1);
	myDeque.push_front(2);

	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
	});
	cout << endl;
	myDeque.pop_back();
	myDeque.pop_front();

	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
	});
}

//원소 접근 : deque의 첫 번째, 두 번째, 마지막 원소를 출력하세요.

void dq::level3()
{
	deque<int> myDeque = { 1,2,3,4,5 };
	cout << "first: " << myDeque.front() << endl;
	cout << "last: " << myDeque.back() << endl;
}

//원소 수정 : deque의 첫 번째 원소를 새로운 값으로 수정하고, 전체 deque를 출력하세요.
void dq::level4()
{
	deque<int> myDeque = { 1,2,3,4,5 };
	cout << "initialized deque: ";
	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
	});
	cout << endl;

	myDeque.front() = 5;
	cout << "modify first elem of myDeque" << endl;
	cout << "modified deque: ";
	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
	});
}

//원소 검색 : 주어진 정수 값이 deque에 있는지 확인하세요.있다면 그 위치도 출력하세요.
void dq::level5()
{
	deque<int> myDeque = { 5,4,3,2,1 };
	int val = 2;	//i'm gonna find this val's value from deque
	int counter = 0;	//this var displays the location of val
	for_each(myDeque.begin(), myDeque.end(), [&val, &counter](int n) {
		++counter;
		if (n == val) {
			cout << val << "는" << counter << "번째에 있습니다." << endl;
		}
	});
}

//정렬과 검색 : deque의 원소를 오름차순으로 정렬하세요.이후에 특정 정수 값이 deque의 어느 위치에 있는지 이진 검색으로 찾아보세요.
void dq::level6()
{
	deque<int> myDeque = { 1,3,2,5,4,7,6,9,8,10 };
	cout << "Current deque: ";
	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
		});
	sort(myDeque.begin(), myDeque.end());
	cout << "\nsorting(asc) deque. . . ." << endl;
	for_each(myDeque.begin(), myDeque.end(), [](int n) {
		cout << n << " ";
		});
}

//데이터 분석 : deque에 들어 있는 원소 중, 최댓값, 최솟값, 평균을 계산하세요.
void dq::level7()
{
	deque<int> myDeque = { 1,9,0,4,2,7,5,10 };
	int sum = 0;
	cout << "original deque:";
	print_dq(myDeque);
	sort(myDeque.begin(), myDeque.end());
	for_each(myDeque.begin(), myDeque.end(), [&sum](int n) {
		sum += n;
		});
	cout << "\nthe lowest value: " << myDeque.front() << endl;
	cout << "the biggest value: " << myDeque.back() << endl;
	cout << "the average: " << static_cast<double>(sum) / myDeque.size() << endl;
}

//부분 합계: deque의 첫 번째 원소부터 i번째 원소까지의 합을 저장한 새로운 deque를 만드세요.
void dq::level8()
{
	deque<int> myDeque = { 1,2,3,4,5 };
	deque<int> dstDeque;
	int threshhold = 4;
	auto start_point = myDeque.begin();
	auto end_point = next(myDeque.begin(), threshhold);
	int sum = 0;
	for_each(start_point, end_point, [&sum, &dstDeque](int n) {
		sum += n;
		dstDeque.push_back(sum);
		});
	print_dq(dstDeque);
}

//슬라이딩 윈도우: 크기 k의 슬라이딩 윈도우를 이용하여 deque의 연속된 부분 배열 중에서 최대 합을 구하세요.
void dq::level9()
{
	deque<int> myDeque = { 1, 3, -1, -3, 5, 3, 6, 7 };
	int k = 3;	//threshhold for getting maximum sum from deque
	int maxSum = 0;
	auto start = myDeque.begin();
	auto end = next(start, k);
	while (end != myDeque.end() + 1) {
		int temp = 0;
		for_each(start, end, [&temp, &maxSum](int n) {
			temp += n;
			});
		maxSum = max(maxSum, temp);
		++start;
		++end;
	}
	cout << "maximum sum is: " << maxSum << endl;
}

//원형 데크 구현 : deque를 사용하여 원형 데크(circular deque)를 구현하세요.
// //원형 데크는 끝과 시작이 연결된 형태의 데크입니다.이 원형 데크에는 원소 추가, 삭제, 조회 등의 기본 연산을 구현해야 합니다.

class CircularDeque {
private:
	deque<int> dq;
	int capacity;
	int size;

public:
	CircularDeque(int cap) : capacity(cap), size(0) {}

	bool insertFront(int value) {
		if (size == capacity) return false;
		dq.push_front(value);
		++size;
		return true;
	}

	bool insertRear(int value) {
		if (size == capacity) return false;
		dq.push_back(value);
		++size;
		return true;
	}

	bool deleteFront() {
		if (size == 0) return false;
		dq.pop_front();
		--size;
		return true;
	}

	bool deleteRear() {
		if (size == 0) return false;
		dq.pop_back();
		--size;
		return true;
	}

	int getFront() {
		if (size == 0) return -1;
		return dq.front();
	}

	int getRear() {
		if (size == 0) return -1;
		return dq.back();
	}

	bool isFull() {
		return size == capacity;
		//이거 좋은거 같음(if 연산문 필요없음)
	}

	bool isEmpty() {
		return size == 0;
	}
};

void dq::level10()
{
	CircularDeque cdq(5);

	cdq.insertFront(1);
	cdq.insertFront(2);
	cdq.insertRear(3);
	cdq.insertRear(4);

	cout << "Front: " << cdq.getFront() << endl;
	cout << "Rear: " << cdq.getRear() << endl;

	cdq.deleteRear();
	cdq.deleteFront();

	cout << "Front after deletion: " << cdq.deleteFront() << endl;
	cout << "Rear atter deletion: " << cdq.deleteRear() << endl;
	}
