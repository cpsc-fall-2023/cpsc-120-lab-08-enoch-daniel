// daniel Castro
// Danielc9435@csu.fullerton.edu
// @Goggles41
// Partners: @Enoki09

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "Error: At least one command line argument is required."
              << std::endl;
    return 1;
  }

  double sum = 0.0;

  for (size_t i = 1; i < arguments.size(); ++i) {
    try {
      double value = std::stod(arguments[i]);
      sum += value;
    } catch (const std::invalid_argument& e) {
      std::cout << "Error: Argument " << arguments[i]
                << "is not a valid number." << std::endl;
      return 1;
    }
  }

  double average = sum / (arguments.size() - 1);

  std::cout << "average = " << average << std::endl;

  return 0;
}