#include<iostream>
 using namespace std;
 class Employee
 {
     private:
         int empid;
         char empname[20];
         int salary;
         
     public:
         Employee()
         {
             salary = 100000;
         }
         void GetData();
         void PutData();
 };
 void Employee::GetData()
 {
     cout<<"Enter the employee id: ";
     cin>>empid;
     cout<<"Enter the employee name: ";
     cin>>empname;
     
 }
 void Employee::PutData()
 {
     cout<<endl<<empid<<"\t"<<empname<<"\t"<<salary;
 }
 int main()
 {
     Employee e[10];
     cout<<"Enter the employee information:"<<endl;
     for(int i=0;i<10;i++)
     {
         e[i].GetData();
     }
     cout<<endl<<"The employee information is:";
     cout<<endl<<"EmpID \t Name \t salary \n";
     for(int i=0; i<10;i++)
     {
         e[i].PutData();
     }
 }