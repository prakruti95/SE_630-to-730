#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    student(string n)
    {
        name = n;
    }
    
    void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    cout<<"Hii";
    student s1 = student("Dhyey");
    s1.display();
    
    return 0;
}