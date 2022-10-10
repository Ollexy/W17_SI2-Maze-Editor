#pragma once
#include <fstream>
#include <sstream>

class FileAdapter
{
private:
    std::fstream* fileStream;
public:
    FileAdapter(const std::string& filename)
    {
        fileStream = new std::fstream(filename.c_str());
    }

    virtual ~FileAdapter()
    {
        delete fileStream;
    }

    void write(const char content[]);

    std::string read();
};
