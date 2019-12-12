#include <iostream>

using namespace std;

int main(){
    int N;
    string code_table[2000];
    int seat_table[2000] = {0};
    cin >> N;
    string c;
    int s1,s2;
    for(int i = 0;i < N;i++){
        cin >> c;
        // cout << c << endl;
        cin >> s1;
        cin >> s2;
        code_table[s1] = c;
        seat_table[s1] = s2;
    }

    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> s1;
        cout << code_table[s1] << " " << seat_table[s1] << endl;
    }

    return 0;
}