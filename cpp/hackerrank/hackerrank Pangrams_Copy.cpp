// A C++ Program to check if the given
// string is a pangram or not
#include<bits/stdc++.h>
using namespace std;

// Returns true if the string is pangram else false
bool checkPangram (string &str)
{
    // Create a hash table to mark the characters
    // present in the string
    vector<bool> mark(26, false);

    // For indexing in mark[]
    int index;

    // Traverse all characters
    for (int i=0; i<str.length(); i++)
    {
        // If uppercase character, subtract 'A'
        // to find index.
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';

        // If lowercase character, subtract 'a'
        // to find index.
        else if('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';

        // Mark current character
        mark[index] = true;
    }

    // Return false if any character is unmarked
    for (int i=0; i<=25; i++)
        if (mark[i] == false)
            return (false);

    // If all characters were present
    return (true);
}

// Driver Program to test above functions
int main()
{
    string str;
    getline(cin, str);

    if (checkPangram(str) == true)
        printf ("pangram");
    else
        printf ("not pangram");

    return(0);
}
