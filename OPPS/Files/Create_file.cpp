#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream My_file("Aditya.txt");
    My_file<<"My name is Aditya Sinha";
    My_file.close();
    return 0;
}

// To create a file, use either the ofstream or fstream class, and specify the name of the file.
// To write to the file, use the insertion operator(<<).