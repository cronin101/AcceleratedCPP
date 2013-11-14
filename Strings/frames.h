#ifndef FRAMES_H
#define FRAMES_H

#include <vector>
#include <string>

// Length of longest string in vector
std::string::size_type width(const std::vector<std::string>&);

// Frame the vector<string> by surrounding in given char
std::vector<std::string> frame(
  const std::vector<std::string>& v,
  const char c,
  const int pad
);

#endif
