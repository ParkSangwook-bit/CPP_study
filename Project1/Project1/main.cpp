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
        
        고정폭을 가지게 된다.
        ex) setw(5)
        위 예제는 5칸의 고정폭을 가진다. 그러므로
        'n'을 입력하면( _을 공백으로 표현)
        ____n 이 출력된다.
        그리고 왼쪽 오른쪽 중앙 정렬은 각각 left, right, internal을 이용하면 가능하다.

        중앙 정렬이나 좌측 정렬의 경우, 특정 문자로 바꾸거나 공백이 입력되지 않고 출력(null이라)되기도 하니
        setfill을 사용해서 바꾸도록 한다.
        ex) cout << std::setw(5) << std::internal << setfill(' ') << str;
        */
    }

    return 0;
}