#include <iostream>
#include <iomanip>

using namespace std;

string loop(int n) {
    string result;
    for (int i = 0; i < n; i++) {
        result += "*";
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 100)
        return 0;

    for (int i = 1; i <= n; i++) {
        cout << setw(n) << loop(i) << endl;
        /*
        #include <iomanip>
        std::setw(int n)
        
        �������� ������ �ȴ�.
        ex) setw(5)
        �� ������ 5ĭ�� �������� ������. �׷��Ƿ�
        'n'�� �Է��ϸ�( _�� �������� ǥ��)
        ____n �� ��µȴ�.
        �׸��� ���� ������ �߾� ������ ���� left, right, internal�� �̿��ϸ� �����ϴ�.

        �߾� �����̳� ���� ������ ���, Ư�� ���ڷ� �ٲٰų� ������ �Էµ��� �ʰ� ���(null�̶�)�Ǳ⵵ �ϴ�
        setfill�� ����ؼ� �ٲٵ��� �Ѵ�.
        ex) cout << std::setw(5) << std::internal << setfill(' ') << str;
        */
    }

    return 0;
}