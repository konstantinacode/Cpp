#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <set>
#include <string>  

void printStringVector(const std::vector<std::string> &vector);

int readPosInt ( void );

inline int factorial(int x) {
  return (x == 1 ? x : x * factorial(x - 1));
}

#endif