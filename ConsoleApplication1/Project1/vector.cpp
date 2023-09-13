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
	float avg = static_cast<float>(sum) / v.size();//������ ���� sum�� ���� ���� �������� �߻��ϱ� ������ static_cast<>()�� �����
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
typedef�� ���� C++ ��Ÿ��: C++11 �̻󿡼��� using�� ����Ͽ� �Լ� ������ Ÿ���� ������ �� �ֽ��ϴ�.
��: using compareptr = bool(*)(int, int);

typedef�� �Լ� ���� ����: compareptr�� ���ǵǱ� ���� ascending �Լ��� ���ǵǾ� �ִµ�, �̴� ������ ���� ���� ���� �ֽ��ϴٸ�,
��������� compareptr�� ���� �����ϴ� ���� �����ϴ�.
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
// ���͸� �����ϴ� ���� �ƴϱ� ������, ���߷����� �ʿ䰡 ����.
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
	//������ �ѹ� �ϰ� ,erase(unique))�۾� ����
	//������ �� ������ �ϱ� ������, ������������ �������� ����
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
	size_t maxSize = max(v1.size(), v2.size());//�� �� ū ���� ��ȯ��
	for (size_t i = 0; i < maxSize; i++) {
		int val1 = (i < v1.size()) ? v1[i] : 0; //���׿�����
		int val2 = (i < v2.size()) ? v2[i] : 0;
		sumv.push_back(val1 + val2);
	}
	for (int i = 0; i < sumv.size(); i++) {
		cout << sumv[i] << " ";
	}
	/*
	size_t�� �ý���(86, 64)�� ���� 4����Ʈ, 8����Ʈ�� ������.
	�ַ� �迭�� ���� ó�� ������ �� �� ���� ũ�⳪ �ε��� ���� �����ϱ� ���� ǥ�� Ÿ��
	*/
}

void rotate_r(vector<int>& v, int k) { //��� ������ ����
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
//l, r �Ѵ� ���� ����� ����� ������ �����Ϸ� �ؼ�, size-1��ŭ ������ �ٿ�����
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
}//��ȭ���� Ȱ����. ��ȭ�� ������ �� �ڼ��� �˸� �� ���ϰ� ��밡���� �� ����.
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
