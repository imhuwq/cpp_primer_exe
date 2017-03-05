#include <iostream>
#include <string>
#include <vector>
#include "Screen_732.h"

using namespace std;

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";

    Window_mgr myWindow;
    Screen s = myWindow.get(0);
    s.display(cout);
    cout << "\n";

    Screen &rf = myScreen;
    myWindow.add(rf);

    myWindow.clear(1);

    cout << "clear" << endl;

    Screen screen = myWindow.get(1);
    screen.display(cout);
    cout << "\n";

    cout << "see my screen" << endl;
    myScreen.display(cout);
    cout << "\n";  // myScreen is not cleared, vector.push_back copies object even if it is a reference

}