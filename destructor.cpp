#include <iostream>
using namespace std;
class num
{
    int count = 0;

public:
    num()
    {
        count++;
        cout << "the constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "the destructor is called for the object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "complier enter the main fn " << endl;
    cout << "creating first object n1 " << endl;
    num n1;
    {
        cout << "entering the block " << endl;
        cout << "creating two more objects " << endl;
        num n2, n3;
        cout << "exiting the block"<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;
}