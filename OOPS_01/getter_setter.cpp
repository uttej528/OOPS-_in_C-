//getter and setter
#include <iostream>
using namespace std;

class student{
    private:
    string name;
    int age,roll_number;
    string grade;
    public:
    void set_name(string s){
        name=s;
    }
    void set_age(int a){
        age=a;
    }
    void set_roll_number(int r){
        roll_number=r;
    }
    void set_grade(string g){
        grade=g;
    }
    
    void get_name()
    {
        cout<<name<<endl;
    }
    
     void get_age()
    {
        cout<<age<<endl;
    }
    
     void get_roll_number()
    {
        cout<<roll_number<<endl;
    }
    
     void get_grade()
    {
        cout<<grade<<endl;
    }
    
    
    
    
};
int main()
{
   student s1;
   s1.set_name("uttej");
   s1.set_age(19);
   s1.set_roll_number(886);
   s1.set_grade("A+");
   
   s1.get_name();
   s1.get_age();
   s1.get_roll_number();
   s1.get_grade();
   return 0;
}
