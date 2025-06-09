#include <fstream>  // Needed for file input/output
#include <iostream>

#include <string>
using namespace std;



int main()
{
    string baris;            // Variable to store each line of input
    ofstream outfile;        // Output file stream to write to a file

    outfile.open("contohfile.txt");  // Create and open the file for writing

    cout << ">= Menulis file, 'q' untuk keluar" << endl;

    while (true)
    {
        cout << "Masukan baris ";  // Prompt user for input
        getline(cin, baris);       // Read entire line from user

        if (baris == "q")          // Check if user wants to quit
            break;

        outfile << baris << endl;  // Write line to file
    }

    outfile.close();  // Close the file after writing (good practice)

    
}
