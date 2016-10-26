#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> t(n);
    vector<long long> a(n);

    for(int i = 0; i < n; i++){
        cin >> t[i];
        cin >> a[i];
    }
    /*
    for(int i = 1; i < n; i++){
        if(t[i-1] <= t[i] && a[i-1] <= a[i]){
            if(t[i] < a[i]){
                t_ans = t[i];
                a_ans = a[i];
            }else {
                t_ans = t[i];
                a_ans = a[i];
            }
        }else if(t[i-1] > t[i] && a[i-1] > a[i]){
            if(t[i] == a[i]){
                if(t[i-1] < a[i-1]){
                    t_ans = a[i];
                    a_ans = a[i];
                }else if(t[i-1] > a[i-1]){
                    t_ans = t[i];
                    a_ans = t[i];
                }else {
                    t_ans = t[i];
                    a_ans = a[i];
                }
            }else if()
        }
    }
    */
    /*
    for(int i = 1; i < n; i++){
        if(t[i-1] < t[i] && a[i-1] < a[i]){
            a_ans = t[i];
            t_ans = a[i];
        }else if(t[i-1] > t[i] && a[i-1] > a[i]){
            int j = 1;
            while(t[i-1] < t[i] * j && a[i-1] < a[i])
        }
    }
    */
    /*
    long b = 1;
    for(int i = 0; i < n; i++){
        if(t[i-1] <= t[i] && a[i-1] <= a[i]){
            int j = 1;
            while(a[i-1]*b < a[i]*j && t[i-1]*b < t[i]*j){j++;}
                //while(a[i] / t[i] == a[i-1]+(j++) / t[i-1]);
            b = j;
        }else if(t[i-1] > t[i] && a[i-1] > a[i]){
            int j = 1;
            if(t[i] < a[i]){
                while(a[i] / t[i] == a[i-1]+(j++) / t[i-1])
                b = j;
            }else if(t[i] > a[i]){
                int j = 1;
                while(t[i] / a[i] == t[i-1]+(j++) / a[i-1]);
                b *= j;
            }else {
                if(t[i-1] < a[i-1]) {
                    b *= a[i-1];
                }else if(t[i-1] > a[i-1]){
                    b *= t[i-1];
                }
            }
        }
    }
    */

    cout << t[n-1] * b + a[n-1] * b << endl;
    return 0;
}