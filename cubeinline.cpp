#include<iostream>
using namespace std;
inline void displayCube(int num)
{
    cout << num * num * num << endl;
}
int main()
{
    displayCube(5);
    displayCube(8);
    displayCube(666);
    return 0;
}
