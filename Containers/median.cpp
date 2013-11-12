#include <algorithm>
#include <stdexcept>

#include "median.h"

using namespace std;

double median(vector<double> vec) {
  typedef vector<double>::size_type vecsize_t;
  vecsize_t vecsize = vec.size();

  if (!vecsize) throw domain_error("median of empty vector");

  sort(vec.begin(), vec.end());

  vecsize_t middle = vecsize / 2;
  return vecsize % 2 ? vec[middle] : (vec[middle] + vec[middle - 1]) / 2;
}
