#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

struct Student_Info {
  std::string name;
  double midterm_g, final_g;
  std::vector<double> homework_gs;
};

bool compareName(const Student_Info&, const Student_Info&);

std::istream& read(std::istream&, Student_Info&);
std::istream& read_hw(std::istream&, std::vector<double>&);

#endif
