#include "Compare.h"
#include "FileHandler.h"
#include "UI.h"

int main(int argc, char *argv[])
{
    FileContents leftFile;
    FileContents rightFile;

    readFile(argv[1], leftFile);
    readFile(argv[2], rightFile);

    Comparison result = compareContents(leftFile, rightFile);

    displayResult(result);

    return 0;
}

void readFile(const char *arg, FileContents arg1)
{
    
}

Comparison compareContents(FileContents arg, FileContents arg1)
{
    return true;
}

void displayResult(Comparison result)
{

}