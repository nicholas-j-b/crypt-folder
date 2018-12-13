#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>

#include "iofile.hpp"


int main(int argc, char** argv){

  Iofile fileObj(argv[1], argv[2]);
  fileObj.debug_print();

  fileObj.write_encrypted();



  return 0;
}
