#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string text;
    ifstream Read_file("Aditya.txt");
    while(getline(Read_file,text)){
        cout<<text;
    }
    Read_file.close();
    return 0;
}

// To read from a file, use either the ifstream or fstream class, and the name of the file.
// Note that we also use a while loop together with the getline() function(which belongs to the ifstream class) to read the file line by line, and to print the content of the file: