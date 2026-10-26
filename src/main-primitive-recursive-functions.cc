/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Signature: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include <exception>
#include <iostream>

#include "args-parser.h"
#include "primitive-recursive-functions-app.h"

constexpr int kExitSuccess = 0;
constexpr int kExitFailure = 1;

int main(int argc, char* argv[]) {
  try {
    ArgsParser argsParser(argc, argv);
    PrimitiveRecursiveFunctionsApp primitive_recursive_functions_app(
      argsParser.getX(), argsParser.getY());
    primitive_recursive_functions_app.runApp();
  } catch (const std::exception& e) {
    std::cerr << "Unexpected error: " << e.what() << '\n';
    return kExitFailure;
  } catch (...) {
    std::cerr << "Error: unknown failure\n";
    return kExitFailure;
  }
  return kExitSuccess;
}
