#ifndef FRAMES_H
#define FRAMES_H

#include <vector>
#include <string>

// Length of longest string in vector
std::string::size_type width(const std::vector<std::string>&);

// Frame the vector<string> by surrounding in given char
std::vector<std::string> frame(
    const std::vector<std::string>&,
    const char,
    const int
);

// Split a given string at whitespace and return as vector<string>
std::vector<std::string> split(const std::string&);

// Given two vector<string>s, return the vertical concatenation of the lines
std::vector<std::string> vcat(
    const std::vector<std::string>&,
    const std::vector<std::string>&
);

// Given two vector<string>s, return the horizontal concatenation of the lines
std::vector<std::string> hcat(
    const std::vector<std::string>&,
    const std::vector<std::string>&
);

#endif

