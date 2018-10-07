#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>


int main(int argc, char** argv){
  std::ifstream inFile(argv[1], std::ios::binary);
  std::ofstream outFile(argv[2], std::ios::binary | std::ios::out);

  std::vector<char> buffer((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
  if (outFile.is_open()){
    for(auto item : buffer){
      item = ~item;
      outFile << item;
    }
    outFile.close();
  }


  return 0;
}
