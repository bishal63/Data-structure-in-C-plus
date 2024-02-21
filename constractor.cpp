#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    char group;
    char department[100];
    student(int r,char g,char *d)
    {
        roll=r;
        group=g;
        strcpy(department,d);
    }
};
int main()
{
    student mahabub(30,'a',"computer");
    student alam(50,'b',"civil");
    cout<<mahabub.department<<endl;
    cout<<mahabub.roll<<endl;
    cout<<mahabub.group<<endl;
    cout<<alam.department<<endl;
    cout<<alam.roll<<endl;
    cout<<alam.group<<endl;

}