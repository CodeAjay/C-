#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:\n";
    cin>>a>>b>>c;
    int max =(a>b)?((a>c)?a:c):((b>c)?b:c);
    int min =(a<b)?((a<c)?a:c):((b<c)?b:c);
    int mid;
    if((a>b && a<c) ||(a>c && a<b)){
        mid=a;
    }else if((b>a&&b<c)||(b>c&&b<a)){
        mid=b;
    }else{
        mid=c;
    }
    // if(max*max==)
    cout<<"Max is: "<< max<< " Min is: "<<min<<" Mid is: "<<mid;
    if(max*max==min*min+mid*mid){
        cout<<"\nSince "<<max<<"^2 "<<"="<<min<<"^2 + "<<mid<<"^2 \n"<<"So Given number are Pythogorian Triplet";
    }else{
        cout<<"\nGiven number are not Pythogorian Triplet";
    }
    return 0;
}