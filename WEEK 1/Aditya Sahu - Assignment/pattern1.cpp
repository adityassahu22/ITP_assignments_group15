#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    for(int i =1; i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<< 1;
        for(int j=1;j<=i;j++)
        cout<< 2;
        for(int j=1;j<=i;j++)
        cout<< 3;
        cout<<endl;
    }

    
    return 0;
}
