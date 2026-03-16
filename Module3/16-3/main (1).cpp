#include <iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    
    student(int i,string n)
    {
        id = i;
        name = n;
    }
    
    void display()
    {
        cout<<id<<" "<<name;
    }
};

int main()
{
    int i1=0;
    string n1="";
    
    int i2=0;
    string n2="";
    
    cout<<"Enter Your Id";
    cin>>i1;
    
    cout<<"Enter Your Name";
    cin>>n1;
    
    cout<<"Enter Your Id";
    cin>>i2;
    
    cout<<"Enter Your Name";
    cin>>n2;
    
    student s1 = student(i1,n1);
    student s2 = student(i2,n2);
    
    s1.display();
    s2.display();

    return 0;
}