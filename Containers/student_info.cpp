#include "student_info.h"

using namespace std;

bool compareName(const Student_Info& x, const Student_Info& y) {
  return x.name < y.name;
}

istream& read_hw(istream& is, vector<double>& hw) {
  if (is) {
    hw.clear();

    double x;
    while (is >> x) hw.push_back(x);

    is.clear();
  }

  return is;
}

istream& read(istream& is, Student_Info& s) {
  is >> s.name >> s.midterm_g >> s.final_g;

  read_hw(is, s.homework_gs);

  return is;
}
