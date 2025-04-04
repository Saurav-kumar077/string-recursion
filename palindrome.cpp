#include <iostream>
using namespace std;
bool checkpalindrome(string str, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    return checkpalindrome(str, i + 1, j - 1);
}
int main()
{
    string name = "saurav";
    bool ispalindrome = checkpalindrome(name, 0, name.length() - 1);
    if ((ispalindrome))
    {
        cout << "Palindrome hai " << endl;
    }
    else
    {
        cout << "Palindrome nahi hai " << endl;
    }
    return 0;
}