#include<iostream>
using namespace std;

class School
{
    public:
    int sid=11;
    int rollno=25;
    int per=90;
    int pid=1;
    
  
    
    
    
};
class Student : public School
{
    public:
    int sid1;
    void getdetail(int rollno1)
    {
        if(rollno==rollno1)
        {
            cout<<"Enter Student Id";
            cin>>sid1;
            
            if(sid==sid1)
            {
                cout<<"student details available";
                  
                  switch(sid)
                    {
                        case 11: 
                        per=89;
                        cout<<per;
                        break;
                        
                        case 12:
                        per=90;
                         cout<<per;
                        break;
                    }
                
            }
            else
            {
                cout<<"student details not available";
            }
        }
    }
};
class Parents : public School
{
    public:
    int sid1;
    void getdetail2(int pid1)
    {
         if(pid==pid1)
        {
             cout<<"Enter Student Id";
            cin>>sid1;
            
            if(sid==sid1)
            {
                cout<<"student details available";
            }
            else
            {
                cout<<"student details not available";
            }
        }
    }
};


int main()
{
    Student s;
    s.getdetail(25);

	return 0;
}