#include<iostream>
using namespace std;
void fib(int n){
    int f,s,nx;
    cout<<"Enter first and second of the series:";
    cin>>f>>s;

    for(int i=2;i<=n;i++){
        cout<<f<<" ";
        nx=f+s;
        f=s;
        s=nx;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the number of terms of the Fibonacci Series: \n";
    cin>>n;
    fib(n);
    return 0;
}

