#include <iostream>
using namespace std;

int main() {
    char c;
    int Small_vowel,capital_vowel;
    cout<<"enter an Alphabet:-"<<endl;
    cin>>c;
    Small_vowel =(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    capital_vowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isalpha(c)){
        if (Small_vowel||capital_vowel)
        {
            cout<<c<<" is vowel"<<endl;
        }
        else
        {
            cout<<c<<" is consonent"<<endl;
        }
    }
    else
        {
            cout<<c<<"Invalid Character"<<endl;
        }
         
    return 0;
}
