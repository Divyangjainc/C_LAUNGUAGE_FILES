#include<iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int num;
    int temp;
    int arr[30];
    count<<"Enter the number of elements : ";
    cin>>num;
    count<<"Enter the elements : ";

    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<=num-1;i++)
    {
        temp=arr[i];
        j=i-1;

        while((temp<arr[j])&&(j>=0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=temp;
    }
}