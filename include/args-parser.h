/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Signature: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef ARGS_PARSER_H_
#define ARGS_PARSER_H_

#include <stdexcept>
#include <string>
#include <string_view>
#include <vector>

class ArgsParser {
 public:
  ArgsParser() = default;
  explicit ArgsParser(int, char* argv[]);
  unsigned getX() const { return x_; };
  unsigned getY() const { return y_; };
  
 private:
  unsigned ParseUnsigned(const std::string&) const;
  unsigned x_;
  unsigned y_;
};

#endif
