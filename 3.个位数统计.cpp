#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int table[10] = {0};
    string::iterator it = s.begin();
    for(;it != s.end();it++){
        table[*it - '0']++;
    }
    for (int i = 0;i < 10;i++){
        if(table[i] == 0) continue;
        cout << i << ":" << table[i] << endl;
    }
    return 0;
}