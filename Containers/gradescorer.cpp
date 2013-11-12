#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(const int argc, const char** argv) {
  cout << "Please enter your first name: ";

  string name;
  cin >> name;

  cout << "Hello " + name + "! ";
  cout << "Please enter your midterm and final exam grades: ";

  double midterm_g, final_g;
  cin >> midterm_g >> final_g;

  cout << "Enter all your homework grades, "
    "followed by end-of-file: ";

  vector<double> homework_gs;
  double homework_g;
  while (cin >> homework_g) homework_gs.push_back(homework_g);

  typedef vector<double>::size_type vecsize_t;
  vecsize_t vecsize = homework_gs.size();

  if (vecsize == 0) {
    cout << endl << "You must enter your grades. "
        "Please try again." << endl;
    return 1;
  }

  sort(homework_gs.begin(), homework_gs.end());

  vecsize_t vecmid = vecsize / 2;
  double median;
  median = vecsize % 2 ? homework_gs[vecmid] : (homework_gs[vecmid] + homework_gs[vecmid - 1]) / 2;

  streamsize prec = cout.precision();
  cout << "Your final grade is " << setprecision(3) <<
      (0.2 * midterm_g) + (0.4 * final_g) + (0.4 * median) << setprecision(prec) << endl;

  return 0;
}
