/*22070123150 Experiment 9(a)*/
#include<iostream>
using namespace std;
int main()
{
    int marks[5], i;
    cout<<"Enter the numbers: ";
    for(i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    cout<<"The marks are: "<<endl;
    for(i=0;i<5;i++)
    {
       cout<<marks[i]<<endl;
    }
    return 0;
}
