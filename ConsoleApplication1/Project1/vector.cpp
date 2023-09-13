#include "vector.h"
#include "header.h"

void vc::level1()
{
	vector<int> v;
	v = { 1,2,3,4,5,6,7,8,9,10 };

}

void vc::level2()
{
	vector<int> vec(5);
	for (int i = 0; i < 5; i++) {
		int num = 0;
		cin >> num;
		vec[i] = num;
	}
	for (int i = 0; i <= vec.size(); i++) {
		cout << vec[i] << " ";
	}
}

void vc::level3()
{
	vector<int> v;
	int n = 0, q = 0, sum = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> q;
	cout << "input " << q << " numbers" << endl;
	for (int i = 0; i < q; i++) {
		cin >> n;
		v.push_back(n);
	}
	cout << "\n vector's sum: ";
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	cout << sum;
	float avg = static_cast<float>(sum) / v.size();//정수형 변수 sum에 대해 정수 나눗셈이 발생하기 때문에 static_cast<>()를 사용함
	cout << "\n vector's avg: " << avg;
}

void vc::level4()
{
	vector<int> v;
	int n = 0, q = 0, sum = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> n;
	cout << "input " << n << "numbers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> q;
		v.push_back(q);
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << " " << v[i];
	}
}
typedef bool (*compareptr)(int, int);

bool ascending(int a, int b) {
	return a > b;
}
void bubblesort(vector<int>& vec, int size, compareptr cmp) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (cmp(vec[j], vec[j + 1])) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
			}
		}
	}
}
void vc::level5()
{
	vector<int> v;
	int n = 0, q = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> n;
	cout << "input " << n << " numbers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> q;
		v.push_back(q);
	}
	for (int i = 0; i < v.size(); i++) {
		cout << " " << v[i];
	}
	cout << endl;
	bubblesort(v, v.size(), ascending);
	for (int i = 0; i < v.size(); i++) {
		cout << " " << v[i];
	}
}
/*
typedef의 현대 C++ 스타일: C++11 이상에서는 using을 사용하여 함수 포인터 타입을 정의할 수 있습니다.
예: using compareptr = bool(*)(int, int);

typedef와 함수 정의 순서: compareptr가 정의되기 전에 ascending 함수가 정의되어 있는데, 이는 문제가 되지 않을 수도 있습니다만,
명시적으로 compareptr를 먼저 정의하는 것이 좋습니다.
*/

void vc::level6()
{
	vector<int> v;
	int n = 0, q = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> n;
	cout << "input " << n << " numbers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> q;
		v.push_back(q);
	}
	int min = v[0], max = v[0];
	for (int j = 0; j < v.size(); j++) {
		if (v[j] < min) {
			min = v[j];
		}
		if (v[j] > max) {
			max = v[j];
		}
	}
	cout << "min: " << min << ", max: " << max << endl;
// 벡터를 정렬하는 것이 아니기 때문에, 이중루프는 필요가 없다.
}

void vc::level7()
{
	vector<int> v;
	int n = 0, q = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> n;
	cout << "input " << n << " numbers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> q;
		v.push_back(q);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	//정렬을 한번 하고 ,erase(unique))작업 수행
	//이유는 비교 연산을 하기 때문에, 떨어져있으면 정렬하지 못함
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	
}

void vc::level8()
{
	vector<int> v1, v2;
	int n = 0, q =0;
	cin >> n;
	cout << "v1: ";
	for (int i = 0; i < n; i++) {
		cin >> q;
		v1.push_back(q);
	}
	cin >> n;
	cout << "\nv2: ";
	for (int i = 0; i < n; i++) {
		cin >> q;
		v2.push_back(q);
	}
	vector<int> sumv;
	size_t maxSize = max(v1.size(), v2.size());//둘 중 큰 것을 반환함
	for (size_t i = 0; i < maxSize; i++) {
		int val1 = (i < v1.size()) ? v1[i] : 0; //삼항연산자
		int val2 = (i < v2.size()) ? v2[i] : 0;
		sumv.push_back(val1 + val2);
	}
	for (int i = 0; i < sumv.size(); i++) {
		cout << sumv[i] << " ";
	}
	/*
	size_t는 시스템(86, 64)에 따라 4바이트, 8바이트로 나뉜다.
	주로 배열의 길이 처럼 음수가 될 수 없는 크기나 인덱스 값을 저장하기 위한 표준 타입
	*/
}

void rotate_r(vector<int>& v, int k) { //얘는 문제가 없음
	for (int i = 0; i < k; i++) {
		int temp = v.back();
		for (int j = v.size()-1; j > 0; j--) {
			v[j] = v[j - 1];
		}
		v.front() = temp;
	}
}
void rotate_l(vector<int>& v, int k) {
	for (int i = 0; i < k; i++) {
		int temp = v.front();
		for (int j = 0; j < v.size()-1; j++) {
			v[j] = v[j + 1];
		}
		v.back() = temp;
	}
}
//l, r 둘다 벡터 사이즈를 벗어나는 연산을 수행하려 해서, size-1만큼 범위를 줄여줬음
	void vc::level9()
	{
		vector<int> v;
		int n = 0, k = 0;
		cout << "how many do you want to input?: " << endl;
		cin >> n;
		cout << "input " << n << " numbers" << endl;
		for (int i = 0; i < n; i++) {
			cin >> k;
			v.push_back(k);
		}
		cout << "v1's elements:";
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\nhow many times do you want to rotate?" << endl;
		cin >> k;
		cout << "rotate right " << k << "times: ";
		rotate_r(v, k);
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << "\nrotate left " << k+2 << "times: ";
		rotate_l(v, k);
		for (int i = 0; i < v.size()+2; i++) {
			cout << v[i] << " ";
		}
	}

void best_sum(vector<int> vec) {
	vector<int> bsumv;
	for (int i = 0; i < vec.size(); i++) {
		bsumv.push_back(0);
	}
	int best_sum = 0;
	bsumv[0] = vec[0];
	for (int cnt = 1; cnt < vec.size(); cnt++) {
		bsumv[cnt] = max(bsumv[cnt - 1] + vec[cnt], vec[cnt]);
		best_sum = max(best_sum, bsumv[cnt]);
	}
	cout << "Max Sum is " << best_sum<<endl;
}//점화식을 활용함. 점화식 개념을 더 자세히 알면 더 편리하게 사용가능할 것 같다.
void vc::level10()
{
	vector<int> v;
	int n = 0, k = 0;
	cout << "how many do you want to receive?: ";
	cin >> n;
	cout << "\ninput " << n << " numbers: ";
	for (int i = 0; i < n; i++) {
		cin >> k;
		v.push_back(k);
	}
	best_sum(v);
}
