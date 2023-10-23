#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    string s , file_name;
    cout<<"Enter the file name: ";
    cin>>file_name;
    cout<<endl<<"Enter the content: ";
    getline(cin>>ws,s);
    // s ="My name is Garv";
    for(int i =0 ; i<s.length() ; i++)
    {
        if(isspace(s[i]))
        ans++;
    }
    if(s.length()!=0)
    cout<<"The total numbner of words in " <<file_name<<" is "<<ans+1<<endl;
    else
    cout<<"The total number of words in "<<file_name<<" is 0"<<endl;
}