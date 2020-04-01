#include "bufferedInputStream.hpp"
#include "binaryFileParser.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        printf("LyxPythonVM need  a parameter: filename\n");
        return 0;
    }

    BufferedInputStraem stream(argv[1]);
    BinaryFileParser parser(&stream);
    CodeObject* main_code = parser.parse();
    return 0;
}