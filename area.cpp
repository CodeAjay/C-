#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,area;
    cout<<"You want to find the area of:\n1. Circle\n2. Rectangle\n3. Square\n4. Triangle\nPlease enter 1 if you want to find the area of circle and enter 2 if rectangle and so on...\n";
    cin>>a;
    switch (a)
    {
    case 1:
        int r;
        double ar;
        cout<<"Enter the radius of the circle\n";
        cin>>r;
        ar=3.14*r*r;
        cout<<"Area of the circle of radius "<<r<<" is "<<ar;
        break;
    
    case 2:
        int l,b;
        cout<<"Enter the length and breadth of the rectangle\n";
        cin>>l>>b;
        area=l*b;
        cout<<"Area of the rectangle with length "<<l<<" and breadth "<<b<<" is "<<area;
        break;
        
    case 3:
        int x;
        cout<<"Enter the side of the square\n";
        cin>>x;
        area=x*x;
        cout<<"Area of the square with side "<<x<<" is "<<area;
        break;
        
    case 4:
        int d,e,f;
        double s,art;
        cout<<"Enter three sides of the triangle\n";
        cin>>d>>e>>f;
        s=(d+e+f)/2.0;
        ar=sqrt(s*(s-d)*(s-e)*(s-f));
        cout<<"Area of the triangle with sides "<<d<<" "<<e<<" "<<f<<" is "<<art;
        break;
    default:
        break;
        cout<<"Oops you entered a wrong choice\nPlease enter a right choice and try again";
    }

    return 0;
}