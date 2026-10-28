#include<iostream>
using namespace std;

class Student {
    private:
        int rollNo;
        string name;
    public:
        Student(int r,string n)    //Constructor
        {
            rollNo=r;
            name=n;
            cout<<"Student object created"<<endl;
        }
        void display()  //Member function
        {
            cout<<"Roll Number:"<<rollNo<<endl;
            cout<<"Name:"<<name<<endl;
        }
        ~Student()  //Destructor
        {
            cout<<"Student object destroyed"<<endl;
        }
    };
    int main()
    {
        int R;
        string N;
        cout<<"Enter roll number:"<<endl;
        cin>>R;
        cout<<"Enter name:"<<endl;
        cin>>N;
        Student s1(101,"Ram");
        Student s2(R,N);
        s1.display();
        s2.display();
        return 0; 
    }