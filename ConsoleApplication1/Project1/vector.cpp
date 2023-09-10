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
	for (int i = 0; i <= 5; i++) {
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
	int n = 0, sum = 0;
	cout << "how many do you want to input?: " << endl;
	cin >> n;
	cout << "input " << n << "numbers" << endl;
	for (int i = 0; i <= n; i++) {
		cin >> n;
		v[i] = n;
		n = 0;
	}
	cout << "\n vector's sum: ";
	for (int i = 0; i <= v.size(); i++) {
		sum += v[i];
	}
	cout << sum;
	cout << "\n vector's avg: " << sum / v.size();
}

void vc::level4()
{
}

void vc::level5()
{
}

void vc::level6()
{
}

void vc::level7()
{
}

void vc::level8()
{
}

void vc::level9()
{
}

void vc::level10()
{
}
