
#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream filestream("file1.txt");
    if (filestream.is_open())
    {
        filestream << "My Name is janvi";
        filestream << "\nI Go Skill Qode Daily";
        filestream << "\nAnd I Learn The Full Stack in SkillQode";
        filestream.close();
    }

    else
    {
        cout << "File Opening Is Fail";
    }

    return 0;
}
