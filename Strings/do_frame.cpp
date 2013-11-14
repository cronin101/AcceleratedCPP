#include <algorithm>
#include <iostream>
#include <numeric>

#include "frames.hpp"

using namespace std;

int main (const int argc, const char** argv) {
    string line;
    getline(cin, line);
    vector<string> lines = frame(split(line), '#', 2);
    cout
        << accumulate(lines.begin(), lines.end(), string(), [](const string& r, const string& e){ return r + "\n" + e; })
        << endl;

    return 0;
}
