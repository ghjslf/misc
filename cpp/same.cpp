#include <iostream>
#include <string>

using namespace std;

bool correct(string sequence) {
    int stack_size = sequence.length();
    int top = 0;
    int bracket_type;

    cin >> bracket_type;
    while (bracket_type != 0) {
        if (bracket_type > 0) {
            sequence[top++] = bracket_type;
        }
        else {
            if (bracket_type != -sequence[--top]) {
                return false;
            }
        }
        cin >> bracket_type;
    }
    if (top != 0) {
        return false;
    }
    return true;
}

int main(int argc, char** argv) {
    cout << "enter a bracket sequence\n"
    << "reading continues to the first whitespace character\n";

    string sequence;
    cin >> sequence;

    if (correct(sequence)) {
        cout << "this is correct bracket sequence\n";
    }
    else {
        cout << "this is incorrect bracket sequence\n";
    }

    return 0;
}
