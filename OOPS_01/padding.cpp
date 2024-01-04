//padding in classes
#include <iostream>
using namespace std;

class student{
    char c;
    int age;
};

class teacher{
   char b;
   int age;
    char c;
    
};

int main()
{
    student s1;
    cout<<sizeof(s1)<<endl;
    
    teacher t1;
    cout<<sizeof(t1);
    return 0;
}
