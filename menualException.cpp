#include <iostream>
using namespace std;

int main()
{
    try
    {
        // Normal program message
        cout << "Selamat belajar di Prodi IT UMY" << endl;

        // Throwing an exception (a string literal)
        throw "Hallo";

        // This line will not be executed due to the throw above
        cout << "Pernyataan ini tidak akan dieksekusi" << endl;
    }

    // Catch block for integer exceptions (won’t be triggered in this case)
    catch (int a)
    {
        cout << "Pengecualian bertipe int ditangani" << endl;
    }

    
}
