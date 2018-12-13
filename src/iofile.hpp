#ifndef IOFILE_HPP
#define IOFILE_HPP

#include<fstream>
#include<iostream>
#include<iterator>
#include<vector>



class Iofile {
private:
  std::ifstream _inFile;
  std::ofstream _outFile;
  char* _inFileName;
  char* _outFileName;

  size_t _fileSize;

  std::vector<char> _data;

public:
  Iofile(char* inFile, char* outFile);
  ~Iofile();

  void write_encrypted();

  void debug_print();
};


#endif
