#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

#include "iofile.hpp"


int main(int argc, char** argv){

  Iofile fileObj(argv[1], argv[2]);
  fileObj.debug_print();

  fileObj.write_encrypted();

  // std::vector<char> buffer((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());


  return 0;
}
