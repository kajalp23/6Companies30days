#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    if(n==1)
        cout << arr[0];
    else{
        long long sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        bool p[n+1][sum/2+1];

        for(int i=0;i<=n;i++){
            for(int j=0;j<=(sum/2);j++){
                p[i][j]=false;
                if(i==0)
                    p[i][j]=false;
                else if(j==0)
                    p[i][j]=true;
                else
                {
                    if(j>=arr[i-1])
                        p[i][j]=p[i-1][j] || p[i-1][j-arr[i-1]];
                    else
                        p[i][j]=p[i-1][j];
                }
            }
        }

        for(int j=(sum/2);j>=0;j--){
            if(p[n][j]==true){
                cout << (sum-j-j) << "\n";
                break;
            }
        }


    }


}
