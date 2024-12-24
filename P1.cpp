//Create string using C style String "welcome to C++ Program"
//Perform following Operations:
//1.Calculate total length of string
//2.Extract welcome from string
//3.Add "Btech" in existing string

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[25] = "Welcome to C++ program";

    int a = strlen(str);
    cout << "Length of string: " << a << endl;

    char b[8];
    strncpy(b, str, 7);
    b[7] = '\0';
    cout << "Extracted 'welcome': " << b << endl;

    strcat(str, " Btech"); 
    cout << "String after appending 'Btech': " << str << endl;

    return 0;
}