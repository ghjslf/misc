#include <iostream>

using namespace std;

const int MAX = 100;

bool brackets() {
    int sequence[MAX];
    int top = 0;
    int bracket_type;

    cin >> bracket_type;
    while (bracket_type != 0) {

        if (bracket_type > 0)
            sequence[top++] = bracket_type;
        else
            if (bracket_type != -sequence[--top])
                return false;

        cin >> bracket_type;
    }
    if (top != 0)
        return false;
    return true;
}

int main() {
    cout << "enter a bracket sequence\n"
        << "use positive numbers for an open bracket and negative numbers for a closing bracket\n"
        << "0 means end of input\n";

    if (brackets())
        cout << "this is correct bracket sequence\n";
    else
        cout << "this is incorrect bracket sequence\n";

    return 0;
}

