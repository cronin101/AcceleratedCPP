#include <stdexcept>

#include "grade.h"
#include "median.h"
#include "student_info.h"

using namespace std;

double grade(double midterm_g, double final_g, double homework_g) {
  return (0.2 * midterm_g) + (0.4 * final_g) + (0.4 * homework_g);
}

double grade(double midterm_g, double final_g, const vector<double>& hws) {
  if (!hws.size()) throw domain_error("student has done no homework");

  return grade(midterm_g, final_g, median(hws));
}

double grade(const Student_Info& s) {
  return grade(s.midterm_g, s.final_g, s.homework_gs);
}
