#include <iostream>
#include <exception>  // For std::exception
#include <array>      // For std::array
using namespace std;

int main()
{
    cout << "Awal program" << endl;

    try
    {
        // Declare a fixed-size array with 3 elements
        array<int, 3> data = {10, 20, 30};

        // Attempt to access index 4, which is out of bounds and throws an exception
        cout << data.at(4) << endl;
    }
    catch (exception &e)
    {
        // Catch and display the exception message
        cout << e.what() << endl;
    }

    // This line runs after the exception is handled
    cout << "Baris program yang terakhir" << endl;

    return 0;
}
