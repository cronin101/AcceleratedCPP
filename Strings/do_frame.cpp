#include <algorithm>
#include <iostream>
#include <numeric>

#include "frames.hpp"

using namespace std;

void show(const vector<string>& lines) {
    cout
        << accumulate(lines.begin(), lines.end(), string(), [](const string& r, const string& e){ return r + "\n" + e; })
        << endl;
}

int main(const int argc, const char** argv) {
    string line_a, line_b;
    getline(cin, line_a);
    getline(cin, line_b);

    vector<string> a_lines = split(line_a), b_lines = split(line_b);

    show(frame(a_lines, '#', 2));
    show(frame(b_lines, '#', 2));

    show(frame(hcat(a_lines, b_lines), '#', 2));
    show(frame(vcat(a_lines, b_lines), '#', 2));

    return 0;
}
