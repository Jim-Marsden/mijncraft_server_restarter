//
// Created by snizzfox on 1/23/21.
//

#ifndef MIJNCRAFT_SERVER_RESTARTER__CMD_PARSER_HPP
#define MIJNCRAFT_SERVER_RESTARTER__CMD_PARSER_HPP
#include <string>

namespace mijn{
  struct parsed_data{std::string start_data; bool do_loop;};
  parsed_data parser(int argc, char **argv);
}


#endif //MIJNCRAFT_SERVER_RESTARTER__CMD_PARSER_HPP
