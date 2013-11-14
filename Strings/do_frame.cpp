#include <iostream>

#include "frames.h"

using namespace std;

int main (const int argc, const char** argv) {
    string line;
    getline(cin, line);
    vector<string> lines = frame(split(line), '#', 2);
    typedef vector<string>::const_iterator iter;
    for (iter it = lines.begin(); it != lines.end(); ++it) cout << *it << endl;

    return 0;
}
