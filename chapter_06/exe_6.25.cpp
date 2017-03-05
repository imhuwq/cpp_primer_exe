#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string str1 = argv[1];
    string str2 = argv[2];
    string all = str1 + str2;
    cout << all << endl;
}