#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
    // Character Array
    char str[] = {'a','b','c','\0'};
    cout<<str<<endl;
    cout<<strlen(str)<<endl; // cstring should be included

    char str2[] = "hello"; //string literals - whose value can't be changed

    // get input and output for character array 
    char st[100];
    cin>>st; // only single word will be taken because cin ignores all the strings after space 
    cout<<"Input character array using cin : "<<st<<endl;
    cin.ignore(100, '\n');  // ✅ clear leftover newline

    char st2[100];
    cin.getline(st2,100,'.');
    cout<<"Input character array using cin.getline : "<<st2<<endl;

    */

    // String 
    string s = "apna college"; // dynamic in nature -> can be resized during runtime
    cout<<s<<endl;

    s = "Canada";
    cout<<s<<endl;

    string str1 = "Hey ";
    string str2 = "Guys";
    string str3 = str1 + str2;
    cout<<str3<<endl;

    cout<<"\nIs str1 equal to str2 ?"<<(str1 == str2)<<endl;
}