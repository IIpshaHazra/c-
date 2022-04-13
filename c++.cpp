#include<iostream>
using namespace std;
int i = 0;
class Student
{
    int roll;
    char name[30];
    int marks[3];
    int total;
    public:
    Student()
    {
        i++;
        cout<<"object is created"<<endl;
    }
        void input();
        void displaydata();
        void modifymarks();
};
void Student::input()
{
    cout<<"Name of students"<<endl;
    cin>>name;
    cout<<"enter the roll number"<<endl;
    cin>>roll;
    total = 0;
    cout<<"enter the marks"<<endl;
    for (int i = 0; i < 3; i++)     
    {
        cin>>marks[i];
        total = total+marks[i];    
    }

    
}
void Student::displaydata()
{
    cout<<"Student Deteils"<<endl;
    cout<<"Name of the student"<<endl;
    cout<<name;
    cout<<"Student's roll number"<<endl;
    cout<<roll;
    cout<<"display the marks"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<marks[i]<<"\n";
    }
    cout<<"the total marks is"<<endl;
    cout<<total<<endl;
    
}
void Student::modifymarks()
{
    int index;
    cout<<"enter the index value"<<endl;
    cin>>index;
    cout<<endl;
    int m;
    cout<<"enter marks for modification"<<endl;
    cin>>m;
    cout<<endl;

    int temp = marks[index];
    marks[index]=m;
    total = total+(m-temp);
    cout<<name<<"'s marks has been modified"<<endl;
}
int main()
{
    Student s[10];
    cout<<"the number of objects created is"<<endl;
    cout<<i<<endl;
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the details of the student"<<(i+1)<<":\n"<<endl;
        s[i].input();
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"display the details of the student"<<endl;
        s[i].displaydata();
    }
    cout<<endl;
    int m;
    cout<<"enter the index of array of objects"<<endl;
    cin>>m;
    s[m].modifymarks();
    for (int i = 0; i < n; i++)
    {
        cout<<"display the details of the student"<<endl;
        s[i].displaydata();
    }
    cout<<endl;
    
    return 0;




}