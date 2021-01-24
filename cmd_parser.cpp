//
// Created by snizzfox on 1/23/21.
//

#include "cmd_parser.hpp"

#include <cxx_argp_parser.h>
#include <sstream>
mijn::parsed_data mijn::parser(int argc, char **argv) {
  std::string file{"mc.jar"};
  unsigned short ram{4};
  bool auto_loop{true};

  cxx_argp::parser parser1{};
  parser1.add_option({nullptr, 'n',"name", 0, "Jar file name."}, file);
  parser1.add_option({nullptr, 'r',"ram", 0, "Amount of ram and buffer."}, ram);
  parser1.add_option({nullptr, 'l',"name", 0, "enable looping"}, auto_loop);

  std::string result;
  return {std::string("java -server -jar " + file + " " + std::to_string(ram)), auto_loop};
}
