#include <iostream>
using namespace std;
int main() {
    int n,m,k;
    cin >> n >> m >> k;

    m=m%n;

    if(m<=(n-k+1))
        cout << (k+m-1) << "\n";
    else
    {
        m-=(n-k+1);
        cout << m << "\n";
    }

}
