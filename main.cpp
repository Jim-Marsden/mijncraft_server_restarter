#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

int main() {
  std::string x{"java -server"};
  auto File = popen(x.c_str(), "rw");
  if(File){

  }
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
