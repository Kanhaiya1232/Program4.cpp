#include <iostream>  
using namespace std;  
class Student 
{  
   public:  
       int id;     
       string name;     
       void insert(int i, string n)    
        {    
            id = i;    
            name = n;    
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<endl;    
        }    
};  
int main() 
{  
    Student s1; //creating an object of Student   
    Student s2; //creating an object of Student  
    s1.insert(10, "Age");    
    s2.insert(20, "Name");    
    s1.display();    
    s2.display();  
    return 0;  
}