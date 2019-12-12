#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;

    int count,j,tempx;
    int maxlen = 0;
    int maxstart = 1;
    int i = 2;
    while(i < sqrt(x)){
        count = 0;
        tempx = x;
        j = i;
        while(tempx % j == 0){
            tempx = tempx / j;
            j++;
            count++;
        }
        if(count > maxlen){
            maxlen = count;
            maxstart = i;
        }
        i = j+1;
    }
    if(maxlen == 0){
        cout << 1 << endl;
        cout << x << endl;
    }else{
        cout << maxlen << endl;
        cout << maxstart;
        for(i = 1;i < maxlen;i++){
            cout << "*" << maxstart + i;
        }
    }


    return 0;
}