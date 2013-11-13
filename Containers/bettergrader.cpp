#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include "grade.h"
#include "student_info.h"

using namespace std;

int main(const int argc, const char** argv) {
  vector<Student_Info> students;
  string::size_type max_name_len = 0;

  Student_Info record;
  while (read(cin, record)) {
    max_name_len = max(max_name_len, record.name.size());
    students.push_back(record);
  }

  sort(students.begin(), students.end(), compareName);

  for (vector<Student_Info>::const_iterator it = students.begin(); it != students.end(); ++it) {
    Student_Info student = *it;

    string::size_type pad_length = max_name_len + 1 + student.name.size();
    cout << student.name << string(pad_length, ' ');

    try {
      double finishing_grade = grade(student);
      streamsize prec = cout.precision();
      cout << setprecision(3) << finishing_grade << setprecision(prec);
    } catch (domain_error e) {
      cout << e.what();
    }

    cout << endl;
  }

  return 0;
}
