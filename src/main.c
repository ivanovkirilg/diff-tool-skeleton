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
