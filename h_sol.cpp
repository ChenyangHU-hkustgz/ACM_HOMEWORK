
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i += 1) {
        string s;
        cin >> s;
        string minimum = s;
        string dbl = s + s; // for getting loop
        int len = s.size();
        for (int j = 0; j < len; j += 1) {
            string cdd = dbl.substr(j, len);
                if (cdd < minimum) {
                    minimum = cdd;
                }
        }
        cout << minimum << endl;
    }
    return 0;
}


