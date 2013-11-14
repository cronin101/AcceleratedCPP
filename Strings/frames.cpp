#include "frames.hpp"

using namespace std;
typedef string::size_type str_size_t;

str_size_t width(const vector<string>& v) {
    str_size_t longest = 0;

    typedef vector<string>::const_iterator iter;
    for (iter it = v.begin(); it != v.end(); ++it) longest = max(longest, it->size());

    return longest;
}

vector<string> frame(
    const vector<string>& v,
    const char c,
    const int pad
) {
    vector<string> ret;
    str_size_t longest = width(v);
    string border(longest + (2 * pad) + 2, c);

    ret.push_back(border);

    typedef vector<string>::const_iterator iter;
    for (iter it = v.begin(); it != v.end(); ++it) {
        int trailing = longest + pad - it->size();
        string line = c + string(pad, ' ') + *it + string(trailing, ' ') + c;
        ret.push_back(line);
    }

    ret.push_back(border);

    return ret;
}

vector<string> split(const string& s) {
    vector<string> ret;

    str_size_t en = s.size();

    str_size_t i = 0;
    while (i != en) {
        while (i != en && isspace(s[i])) ++i;

        str_size_t j = i;
        while (j != en && !isspace(s[j])) ++j;

        if (i != j) {
            ret.push_back(s.substr(i, j - i));
            i = j;
        }
    }

    return ret;
}

vector<string> vcat(const vector<string>& a, const vector<string>& b) {
    vector<string> ret = a;
    ret.insert(ret.end(), b.begin(), b.end());

    return ret;
}

vector<string> hcat(const vector<string>& a, const vector<string>& b) {
    vector<string> ret;
    str_size_t r_indent = width(a) + 1;

    typedef vector<string>::const_iterator iter;
    iter a_it = a.begin(), b_it = b.begin();
    while (a_it != a.end() || b_it != b.end()) {
        string line;

        if (a_it != a.end()) line  = *(a_it++);
        line += string(r_indent - line.size(), ' ');
        if (b_it != b.end()) line += *(b_it++);

        ret.push_back(line);
    }
    return ret;
}

