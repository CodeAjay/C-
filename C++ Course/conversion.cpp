#include <bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;
int n;

//Binary to Decimal Conversion
int btd(int n){
    int ans=0,pow=1;
    cout<<"Enter a binary number to convert to decimal:\n";
    cin>>n;
    
    while(n>0){
        int rm=n%10;
        ans+=pow*rm;
        pow*=2;
        n/=10;
    }
    return ans;
}

//Octal to Decimal Conversion
int otd(int n){
    int ans=0,pow=1;
    cout<<"Enter a octal number to convert to decimal:\n";
    cin>>n;
    
    while(n>0){
        int rm=n%10;
        ans+=pow*rm;
        pow*=8;
        n/=10;
    }
    return ans;
}

//Decimal to Binary Conversion
void dtb(int n){
   int rs=0;
   cout<<"Enter a decimal number\n";
   cin>>n;
   string ans="";
   while(n>0){
       int rem=n%2;
       ans+= to_string(rem);
       n/=2;
   }
   
    reverse(ans.begin(), ans.end());
    cout<<ans<<"\n";
    // return 0;
}

//Decimal to Octal Conversion
void dto(int n){
   int rs=0;
   cout<<"Enter a decimal number\n";
   cin>>n;
   string ans="";
   while(n>0){
       int rem=n%8;
       ans+= to_string(rem);
       n/=8;
   }
   
    reverse(ans.begin(), ans.end());
    cout<<ans<<"\n";
    // return 0;
}

int main()
{
    // int n;
    // cout<<"Enter a Decimal number: \n";
    // cin>>n;
    // int cnt=0;
    // for(int i=n;i>0;i/=10){
    //     int k=i/10;
    //     if(k!=0){
    //         cnt+=1;
    //     }else{
    //         cnt+=0;
    //     }
    // }
    // cout<< cnt+1;

    // string ab="Programmingworld";
    // // cout<<"Enter a String:\n";
    // int n=ab.length();
    // // cin.getline (ab,n);
    // for(int i=0;i<ab.length();i++){
    //     for(int j=0;j<ab.length();j++){
    //         if(i==0){
    //             cout<<ab[j];
    //         }else if(i==n-1){
    //             cout<<ab[i-j];
    //         }else if(j==0){
    //             cout<<ab[i];
    //         }else if(j==n-1){
    //             cout<<ab[j-i];
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<"\n";
    // }

    //Binary to Decimal Conversion
    cout<<btd(n)<<"\n";

    //Octal to Decimal Conversion
    cout<<otd(n)<<"\n";

    //Decimal to Binary Conversion
    dtb(n);

    //Decimal to Octal Conversioin
    dto(n);
    return 0;
}