#include <iostream>
#include <string>

using namespace std;

int main(const int argc, const char** argv) {
  const int padding = 3;

  cout << "Please enter your name: ";

  string name;
  cin >> name;

  const string greeting = "Welcome " + name + "!";

  const int rows = (2 * padding) + 3;
  const string::size_type cols = (2 * padding) + greeting.size() + 2;

  cout << endl;

  for (int row = 0; row != rows; ++row) {
    string::size_type col = 0;

    while (col != cols) {
      if (row == padding + 1 && col == padding + 1) {
        cout << greeting;
        col += greeting.size();
      } else {
        if      (row == 0)         cout << "v";
        else if (row == rows - 1)  cout << "^";
        else if (col == 0)         cout << ">";
        else if (col == cols - 1)  cout << "<";
        else                       cout << " ";

        ++col;
      }
    }
    cout << endl;
  }

  return 0;
}
