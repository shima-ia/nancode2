#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    string name;
	string name1;
    float salary;
    float sale;
    float commission;
    //*****input*****
    cout<<"Enter Name: ";
    cin>>name>>name1;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter Sale: ";
    cin>>sale;
    cout<<"Enter Commission Percent: ";
    cin>>commission;
    //*****output*****
    cout<<"------output------"<<endl;
    cout<<"You name = "<<name<< name1<<endl;
    cout<<"Total Revenue "<<(sale * commission)/100 + salary<<" Bath"<<endl;

    return 0;
}