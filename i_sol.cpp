#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    cin.ignore(); // this is vital. discard the "\n" in the end of the line

    while (n--) {  //can only use n--
        string line;
        getline(cin, line); //get the whole line without the "\n"
        int len = line.size();
        int combo = 0;
        int score = 0;
        for (int i = 0; i < len; i += 1) {
            char c = line[i];
            if (c == 'O') {
                combo += 1;
                score += combo;
            }
            else {
                combo = 0;
            }
        }
        cout << score << endl;
    }


    return 0;
}