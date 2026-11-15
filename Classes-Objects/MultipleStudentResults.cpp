#include<iostream>
using namespace std;

class Student{

private:
    string name;
    int rollno,marks1,marks2,marks3;
    float Total,Percentage;

    //accept student details
public:
    void getDetails()
    {
        cout<<"\nEnter Name:"<<endl;
        cin>>name;
        cout<<"Enter marks of subject 1:"<<endl;
        cin>>marks1;
        cout<<"\nEnter marks of subject 2:"<<endl;
        cin>>marks2;
        cout<<"\nEnter marks of subject 3:"<<endl;
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
        cout<<"\nPercentage:"<<Percentage<<"%"<<endl;
    }
};
int main()
{
    Student s[5];
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter Details of student :"<<i+1;
        s[i].getDetails();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"\n Details of student :"<<i+1;
        s[i].calculateTotal();
        s[i].calculatePercentage();
        s[i].displayDetails();
    }
    return 0;
}
