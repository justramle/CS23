
#include 
#include 
#include 

#include "ASTree.hpp"

// Simple function to exercise/test copy-ctor, dtor, swap, assignment.
//
void testCopyAssign(srcML p) {
    std::cout   inputName;      //Input file names (foo.cpp.xml)
    std::vector  fileName;       //File names       (foo.cpp)
    std::vector  profileName;    //Profile names    (foo_cpp)

    for (int i = 1; i > code;
    inFile.close();

    code.mainHeader(profileName, fileName);   //Add in main header
    code.mainReport(profileName);             //Add in the report
    code.functionCount(profileName[0]);       //Count funciton invocations
    code.lineCount(profileName[0]);           //Count line invocations

    std::string outFileName;
    outFileName = "p-" + fileName[0];
    std::ofstream outFile(outFileName.c_str());
    outFile > code;
        inFile.close();

        code.fileHeader(profileName[i]);       //Add in file header info
        code.functionCount(profileName[i]);    //Count funciton invocations
        code.lineCount(profileName[i]);        //Count line invocations

        outFileName = "p-" + fileName[i];
        outFile.open(outFileName.c_str());
        outFile 
