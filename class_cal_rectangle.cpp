#include<iostream> 
using namespace std;
int main()
{
        float length , breadth , areaOfTheReactangle;
        cout<<"Enter the length and breadth of the rectangle separated by a space"<<endl;
        cin>>length>>breadth;
        areaOfTheReactangle = length * breadth;  //Calculating the area of the rectangle
        cout<<"The area of the rectangle is"<<endl<<areaOfTheReactangle;
        return 0;
}