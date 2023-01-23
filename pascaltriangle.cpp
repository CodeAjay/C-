#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int ncr(int i,int j){
    int rs=factorial(i)/(factorial(i-j)*factorial(j));
    return rs;
}

int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<"\n";
    }

    return 0;
}