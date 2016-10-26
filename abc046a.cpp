#include<iostream>

using namespace std;

int main(){
    int a, b, c;
    int cnt = 0;

    cin >> a >> b >> c;

    if(a == b && b == c && c == a) {
        cout << 1 << endl;
        return 0;
    }else if ((a == b && a == c) || (b == c && b == a) || (c == a && c == b)){
        cout << 2 << endl;
        return 0;
    }else if (a == b || b == c || c == a){
        cout << 2 << endl;
        return 0;
    }
    

    cout << 3 << endl;
    return 0;
}