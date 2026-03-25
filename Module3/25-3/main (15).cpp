#include<iostream>
using namespace std;

class Account
{
     public:  
     int accno=100; //data member (also instance variable)      
     string name="tops";  
     //static int count;   
    
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
    }
    
    void display()
    {
        cout<<accno<<" "<<name<<endl;
    }
    
};


int main()
{
    Account a1 = Account(101,"shubham");
    Account a2 = Account(102,"Dhyey");
    Account a3 = Account(103,"Rajvi");
    
    a1.display();
    a2.display();
    a3.display();
    return 0;
}