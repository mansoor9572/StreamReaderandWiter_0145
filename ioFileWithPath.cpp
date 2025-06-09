#include <fstream>  
#include <iostream>
#include <string>
using namespace std;



int main()
{
    string baris;            // Variable to store each line of input
    string filename;
    cout<<"enter the file name ";
    cin>>filename ;

    ofstream outfile;        // Output file stream to write to a file

    outfile.open(filename +".txt");  // Create and open the file for writing

    cout << ">= Menulis file, 'q' untuk keluar" << endl;
    cout << "Masukan baris ";  // Prompt user for input


    while (true)
    {
        cout << "- ";
        getline(cin, baris);       // Read entire line from user

        if (baris == "q")          // Check if user wants to quit
            break;

        outfile << baris << endl;  // Write line to file
    }

    outfile.close();  // Close the file after writing (good practice)

    ifstream infile;  // Input file stream to read from a file

    infile.open(filename+".txt");  // Open the same file for reading

    cout << endl << ">= Membuka dan membaca file" << endl;

    // Check if the file opened successfully
    if (infile.is_open())
    {
        while (getline(infile, baris))  // Read line by line from the file
        {
            cout << baris << endl;      // Output each line to the screen
        }

        infile.close();  // Close the file after reading
    }

    return 0;  // End of program
}
