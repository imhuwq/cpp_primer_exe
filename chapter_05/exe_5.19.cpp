#include <iostream>
#include <string>

using namespace std;

int main() {
    string go_on = "yes";
    string sentence1 = "", sentence2 = "";

    do {
        getline(cin, sentence1);
        getline(cin, sentence2);

        if (sentence1.size() < sentence2.size()) {
            cout << sentence1 << endl;
        } else {
            cout << sentence2 << endl;
        }
        cout << "go on? <yes/no>" << endl;
        getline(cin, go_on);
    } while (go_on == "yes");
}