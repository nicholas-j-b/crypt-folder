#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>


int main(int argc, char** argv){
  std::ifstream inFile("/home/nick/ws-cpp/crypt-folder/test/first.txt", std::ios::binary);
  std::ofstream outFile("/home/nick/ws-cpp/crypt-folder/test/out.txt", std::ios::binary | std::ios::out);

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
