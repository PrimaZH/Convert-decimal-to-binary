#include <iostream>
#include <string>
using namespace std;
 
struct PersonInfo
 {
   int age;
   char name[50];
   char address[200];
   char Occupation [100];
   double net_salary;
   double tax;
   
 };
 
void printStructInfo(PersonInfo p)
 {
   cout<<"PersonInfo Structure:";
   cout<<"\nAge:"<<p.age;
   cout<<"\nName:"<<p.name;
   cout<<"\nAddress:"<<p.address;
   cout<<"\nOccupation:"<<p.Occupation;
   cout<<"\ntax:"<<p.tax;
   cout<<"\nnet_Salary:"<<p.net_salary;
 }
int main()
 {
   PersonInfo p;
   cout << "Enter name: ";
   cin.get(p.name, 50);
   cout << "Enter age: "; cin >> p.age;
   cout << "Enter address:"; cin >> p.address;
   cout << "Enter Net salary: "; cin >> p.net_salary;
   cout << "Enter Occupation:"; cin>> p.Occupation;
   cout << "Enter Nominal Tax:" ; cin >> p.tax;
   
    
   printStructInfo(p);
 }
 

