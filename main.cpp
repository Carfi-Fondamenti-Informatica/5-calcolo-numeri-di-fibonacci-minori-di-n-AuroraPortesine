#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, c=0, n=0;
    cin >> n;
    while(c<=n && (a+b)<=n ){
        c=a+b;
        b=a;
        a=c;
        cout<<c<<endl;
    }

}
