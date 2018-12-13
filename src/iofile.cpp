#include "iofile.hpp"

Iofile::Iofile(char* inFile, char* outFile)
:_inFileName(inFile), _outFileName(outFile)
{
  std::ifstream _inFile(_inFileName, std::ios::binary);
  _inFile.seekg(0, std::ios::end);
  _fileSize = _inFile.tellg();
  _inFile.seekg(0, std::ios::beg);
  _inFile.unsetf(std::ios::skipws);

  _data.resize(_fileSize);

  size_t i  = 0;

  while(!_inFile.eof())
  {
    _inFile >> _data[i++];
  }

  _inFile.close();
}

Iofile::~Iofile()
{

}

void Iofile::write_encrypted()
{
  std::ofstream _outFile(_outFileName, std::ios::binary | std::ios::out);

  std::cout<<"_data.size()"<<std::endl;
  std::cout<<_data.size()<<std::endl;

  if (_outFile.is_open()){
    for(auto item : _data){
      // std::cout<<+item<<std::endl;
      _outFile << item;

    }
    _outFile.close();
  }

}


void Iofile::debug_print()
{
  std::cout<<"fileSize: "<<_fileSize<<std::endl;
}
