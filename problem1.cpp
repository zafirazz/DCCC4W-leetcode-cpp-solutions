#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int cnt=0, prev = 0, curr = 1;

    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
            curr++;
        else
        {
            cnt += min(curr, prev);
            prev = curr;
            curr = 1;
        }
    }
    return cnt += min(prev, curr);
}


