
#include <iostream>
using namespace std;
  
struct employee {
    string ename;
    int age, phn_no;
    int salary;
};
  
// Function to display details of all employees
void display(struct employee emp[], int n)
{
    cout << "Name\tAge\tPhone Number\tSalary\n";
    for (int i = 0; i < n; i++) {
        cout << emp[i].ename << "\t" << emp[i].age << "\t"
             << emp[i].phn_no << "\t" << emp[i].salary << "\n";
    }
}
  
// Driver code
int main()
{
    int n = 5;
    // Array of structure objects
    struct employee emp[n];
  
    // Details of employee 1
    emp[0].ename = "Chirag";
    emp[0].age = 24;
    emp[0].phn_no = 1234567788;
    emp[0].salary = 20000;
    
    
    // Details of employee 2
    emp[1].ename = "Arnav";
    emp[1].age = 31;
    emp[1].phn_no = 1234567891;
    emp[1].salary = 56000;
  
    // Details of employee 3
    emp[2].ename = "Shivam";
    emp[2].age = 45;
    emp[2].phn_no = 1100661111;
    emp[2].salary = 30500;
    
    // Details of employee 4
    emp[3].ename = "Riya";
    emp[3].age = 40;
    emp[3].phn_no = 1107849746;
    emp[3].salary = 40500;
    
    // Details of employee 5
    emp[4].ename = "Ashutosh";
    emp[4].age = 50;
    emp[4].phn_no = 9835463783;
    emp[4].salary = 45500;
    
    display(emp, n);
  
    return 0;
}
