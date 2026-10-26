/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Signature: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "args-parser.h"

constexpr std::string_view kXCommand = "-x";
constexpr std::string_view kYCommand = "-y";
constexpr std::string_view kHelpCommand = "-help";
constexpr std::string_view kHelpError =
  "\n(Help) This program simulates a Primitive Recursive Function (PRF) solver "
  "for power(x, y)\n"
  "Try: ./primitive-recursive-functions -x <unsigned> -y <unsigned>";
constexpr std::string_view kUsageError = 
  "\nUse: ./primitive-recursive-functions -help";
constexpr std::string_view kNaturalNumbers = "0123456789";

ArgsParser::ArgsParser(int argc, char* argv[]) {
  if (argc == 2 && std::string_view(argv[1]) == kHelpCommand) {
    throw std::invalid_argument(std::string(kHelpError));
  } 
  if (argc != 5 || 
      std::string_view(argv[1]) != kXCommand ||
      std::string_view(argv[3]) != kYCommand) {
    throw std::invalid_argument(std::string(kUsageError));
  }
  x_ = ParseUnsigned(argv[2]);
  y_ = ParseUnsigned(argv[4]);
}

unsigned ArgsParser::ParseUnsigned(const std::string& text) const {
  if (text.empty() || 
      text.find_first_not_of(kNaturalNumbers) != std::string::npos) {
    throw std::invalid_argument("Invalid unsigned: " + text + "\n");
  }
  return std::stoi(text);
}

