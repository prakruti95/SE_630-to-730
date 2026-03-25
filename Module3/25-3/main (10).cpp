#include<iostream>
using namespace std;

class Counter
{
    public:
   static int count;
    
    Counter()
    {
        count++;
        cout<<count<<endl;
    }
    
};

int Counter::count=0;

int main()
{
    Counter c1 = Counter();
    Counter c2 = Counter();
    Counter c3 = Counter();

    return 0;
}