#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    //All the methods to initialize the string

    string s0;
    string s1("Hello World");
    string s2 = "Hello World";
    string s3 = (s2);
    string s4 = s3;

    //reason for ending the string with 0(null value) beacause it is the syntax of declaring a char array
    //also sometime the the answer matches without any error
    // but it only by luck that the answer it correct, it not compulsory evertime.

    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;

    if (s0.empty()) //To tell if the string is empty
    {
        cout << "The String is empty" << endl;
    }

    //Append or Add the elements

    s0.append("C++ is good");
    cout << s0 << endl;

    s0 += " and python is too";
    cout << s0 << endl;

    //Remove or erase the elements

    cout << s0.length() << endl;
    s0.clear();
    cout << s0.length() << endl;

    //Compare strings

    s0 = "Ghanmohan";
    s1 = "Yatharth";

    cout << s1.compare(s1) << endl; //returns 0, <0, >0

    if (s1 > s0)
    {
        cout << "Yatharth is lexi greater than Ghanmohan" << endl;
    }
    else
    {
        cout << "Ghanmohan is lexi greater than Yatharth" << endl;
    }

    cout << s0[1] << endl; //print character at specific position

    //Find substrings

    string s6 = "Ghanmohan is good boy";
    int idx = s6.find("good");
    cout << idx << endl;

    //Remove the word from string

    string word = "good";
    int len = word.length();
    cout << s6 << endl;
    s6.erase(idx, len + 1);
    cout << s6 << endl;

    // Iteration methods in a string
    // Method 1:

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << ":";
    }
    cout << endl;

    //Method 2:

    for (auto it = s0.begin(); it < s0.end(); it++)

    {
        cout << (*it) << "?";
    }
    cout << endl;

    //Alternative of auto in iterator

    for (string::iterator it = s0.begin(); it < s0.end(); it++)
    {
        cout << (*it) << "*";
    }
    cout << endl;

    //Method 3: For Each loop

    for (auto c : s1)
    {
        cout << c << ".";
    }


}