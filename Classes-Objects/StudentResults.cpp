#include<iostream>
using namespace std;

class Student{

    string name;
    int rollno,marks1,marks2,marks3;
    float Total,Percentage;

    //accept student details
public:
    void getDetails()
    {
        cout<<"\nEnter Details of Student:-";
        cout<<"\nEnter Name:";
        cin>>name;
        cout<<"\nEnter marks of subject 1:";
        cin>>marks1;
        cout<<"\nEnter marks of subject 2:";
        cin>>marks2;
        cout<<"\nEnter marks of subject 3:";
        cin>>marks3;

    }
    //calculate total marks
    void calculateTotal()
    {
        Total=marks1+marks2+marks3;
    }
    //calculate percentage
    void calculatePercentage()
    {
         Percentage=(Total)/3;
    }
    //Display details
    void displayDetails()
    {
        cout<<"\n---Student Details---";
        cout<<"\nName:"<<name<<endl;
        cout<<"Marks of subject 1:"<<marks1<<endl;
        cout<<"Marks of subject 2:"<<marks2<<endl;
        cout<<"Marks of subject 3:"<<marks3<<endl;
        cout<<"\nTotal marks of 3 subjects is:"<<Total;
        cout<<"\nPercentage:"<<Percentage<<endl;
    }
};
int main()
{
    Student s;
    s.getDetails();
    s.calculateTotal();
    s.calculatePercentage();
    s.displayDetails();
    return 0;
}
