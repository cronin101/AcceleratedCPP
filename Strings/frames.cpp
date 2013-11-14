#include "frames.h"

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
