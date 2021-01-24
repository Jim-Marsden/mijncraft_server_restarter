#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

#include "cmd_parser.hpp"

int main(int argc, char **argv) {
  auto start_data = mijn::parser(argc, argv);
  do {
    auto File = popen(start_data.start_data.c_str(), "rw");
    if(File){

    } else {std::cerr << "Failed to open: " << start_data.start_data << '\n'; std::exit(EXIT_FAILURE);}

    pclose(File);
  } while (start_data.do_loop);

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
