#include "frames.h"

using namespace std;
typedef string::size_type str_size_t;

str_size_t width(const vector<string>& v) {
  str_size_t longest = 0;

  typedef vector<string>::const_iterator iter;
  for(iter it = v.begin(); it != v.end(); ++it) longest = max(longest, it->size());

  return longest;
}
