#include<iostream>
#include<vector>
using namespace std;

int main () {
    int n;
    int turn = 1; // To record the turn of the game

    while (cin >> n && n != 0) { //All the things in this {} is within the n-th turn
        vector<int> pwd(n); //set a vector (list) named "pwd" to store, the len is n
        for (int i = 0; i <n; i += 1) {
            cin >> pwd[i];
        }
        cout << "Game " << turn << ":" << endl;

        while (true) {
            vector<int> guess(n);
            bool all_zero = true;
            for (int i = 0; i < n; i += 1) {
                cin >> guess[i];
                if (guess[i] != 0) {
                    all_zero = false;
                }
            }
            if (all_zero) {
                break; //to break the while loop
            }
            int strong = 0;
            for (int i = 0; i < n; i += 1) {
                if (pwd[i] == guess[i]) {
                    strong += 1;
                }
            }
            int cnt_pwd[10] = {0}, cnt_gue[10] = {0};
            for (int i = 0; i < n; i += 1) {
                cnt_pwd[pwd[i]] += 1;
                cnt_gue[guess[i]] += 1;
            }
            int weak_total = 0;
            for (int i = 1; i <= 9; i += 1) {
                weak_total += min(cnt_pwd[i], cnt_gue[i]);
            }
            int weak = weak_total - strong;
            cout << "    (" << strong << "," << weak << ")" << endl;
        }
        turn += 1;
    }

    return 0;
}
