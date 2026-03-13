#include<iostream>
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
        cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    student st = student(101,"rajvi");
     student st2 = student(102,"shubham");
      student st3 = student(103,"dhyey");
    st.display();
    st2.display();
    st3.display();
   
    
 
    return 0;
}