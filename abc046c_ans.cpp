#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> t(n);
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> t[i] >> a[i];
    }

    long long A = a[0],B = t[0];
    long long ans_n = 1;
    for(int i = 1; i < n; i++){
        ans_n = (long long)max(ceil((double)A/a[i]), ceil((double)B/t[i]));

        A = ans_n * a[i];
        B = ans_n * t[i];
    }

    cout << A + B << endl;
    return 0;
}