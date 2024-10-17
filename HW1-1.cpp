#include <iostream>
#include <string>

using namespace std;

int main() {
    string student_id;
    
    // 輸入學號
    cout << "請輸入你的學號: ";
    cin >> student_id;
    
    // 輸出 "Hello,<你的學號>"
    cout << "Hello, " << student_id << endl;
    
    return 0;
}

