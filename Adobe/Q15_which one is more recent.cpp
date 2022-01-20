#include <iostream>
using namespace std;
int main() {
    string s1,s2;

    cin >> s1 >> s2;

    int i=0,j=0;
    while(i<s1.length() && j<s2.length()){
        if(s1[i]!=s2[j])
            break;
        i++;
        j++;
    }
    if(i<s1.length()){
        if(j<s2.length()){
            if(s1[i]<s2[j])
                cout << s2 << "\n";
            else
                cout << s1 << "\n";
        }
        else
            cout << s1 << "\n";
    }
    else{
        cout << s2 << "\n";
    }


}
