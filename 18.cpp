/*18) Напишите логическую функцию, проверяющую, является строка палиндромом.
Можно считать, что строка состоит только из букв латиницы.*/

#include <iostream>
using namespace std;

bool polindromli(string s){
    bool f;
int i, y;
string d;
y=0;
for (int i=1; i<=s.length(); i++)
{
d+=s[s.length()-i];
}

if (d==s)
{
f = true;
}
return f;
}


int main()
{
    string t;
    getline(cin, t);
    cout << polindromli(t);

return 0;
}
