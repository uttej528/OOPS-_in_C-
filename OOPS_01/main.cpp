#include <iostream>
using namespace std;

//creating class(own data type)
class student{
    public:
    string name;
    int age,rollnumber;
    string grade;
    
};

int main()
{
    //creating the object
  student s1;
  //Accessing member variables 
  s1.name="uttej";
  s1.rollnumber=21;
  s1.grade="A+";
  s1.age=19;
  //displaying member variables
 cout<<s1.name<<endl<<s1.age<<endl<<s1.rollnumber<<endl<<s1.grade;
  
    return 0;
}