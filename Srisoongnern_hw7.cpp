#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream MyReadFile("Srisoongnern_hw7.txt");

    if (!MyReadFile)
    {
        cerr << "Unable to open file.\n";
        return 1;
    }

    double sum = 0.0;
    int count = 0;
    double number;

    while (MyReadFile >> number)
    {
        sum += number;
        count++;
    }

    MyReadFile.close();

    if (count == 0)
    {
        cout << "There is no number in the file.\n";
    }
    else
    {
        double average = sum / count;
        cout << "The average is = " << average << "\n";
    }

    return 0;
}