#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // write file
    ofstream fout("c:\\cpp\\output.txt");

    // read file
    ifstream fin("c:\\cpp\\input.txt");
    if (fin.fail() || fout.fail())
    {
        cout << "Can not read or write to the file... Error!" << endl;
    }
    else {
        fout << "Hello World!" << endl;   // write to file
        // cout << "Hello World" << endl; // write to console
        int x;
        fin >> x;       // input from file
        // cin >> x;    // input from console
        cout << "x==" << x;
    }
    fin.close();
    fout.close();
    return 0;
}