#include<iostream>
using namespace std;

class Account
{
     public:  
     int accno=100; //data member (also instance variable)      
     string name="tops";  
     static int count;   
    
    Account(int accno, string name)
    {
        this->accno = accno;
        this->name = name;
        count++;  
    }
    
    void display()
    {
        cout<<accno<<" "<<name<<endl;
    }
    
};
int Account::count=0;  

int main()
{
    Account a1 = Account(101,"shubham");
    Account a2 = Account(102,"Dhyey");
    Account a3 = Account(103,"Rajvi");
    
    a1.display();
    a2.display();
    a3.display();
    
    cout<<"Total Accounts are: "<<Account::count<<endl;
    return 0;
}