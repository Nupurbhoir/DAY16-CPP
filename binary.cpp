#include <iostream>
using namespace std;
class Number
{
    private:
    int n;
    public:
    void get_n()
    {
        cout<<"enter the number";
        cin>>n;
    }
    void put_n()
    {
        cout<<n<<endl;
    }
    Number operator +(Number Y)
    { 
        Number ans;
    ans.n = n + Y.n;
    return ans;
    }
};
    int main()
    {
        Number O1,O2,O3;
        O1.get_n();
        O2.get_n();
        O3= O1.operator + (O2);
        cout<<"\n Number 1 =";
        O1.put_n();
        cout<<"\n NUMBER 2 =";
        O2.put_n();
        cout<<"\n Addition =";
        O3.put_n();
        return 0;
    }

    