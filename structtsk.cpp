#include<iostream>
#include<regex>
#define n 2
#include<string>
using namespace std;
struct employee{
    int empid;
    char *empname = new char[50];
    char *empaddress = new char[50];
    char *empemail = new char[50];
    char *empdes= new char[50];
};
void showMenu();
struct employee e[n];
bool Email_check(string email)
        {
 		    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
            return regex_match(email,pattern);
        }
void add(){
    for(int i=0;i<n;i++){
        cout<<"Enter the empid: ";
        cin>>e[i].empid;
        cout<<"Enter name of the employee: ";
        cin>>e[i].empname;
        cout<<"Enter the employee address";
        cin>>e[i].empaddress;
        cout<<"Enter Employee Email:  ";
        cin>>e[i].empemail;
        while(Email_check(e[i].empemail)==false){
            cout<<"Your Email-Id is invalid"<<endl;
            cout<<"Enter Employee Email:  ";
            cin>>e[i].empemail;
        }
        cout<<"Enter Employee Designation:  ";
        cin>>e[i].empdes;
        
    }
    showMenu();

}
void view(){
    for(int i=0;i<n;i++){
        cout<<"EmpID:  "<<e[i].empid<<"Empname:  "<<e[i].empname<<"EmpAddress:  "<<e[i].empaddress<<"Empemail:  "<<e[i].empemail<<"EmpDesignation"<<e[i].empdes<<endl;

    }
    showMenu();
}
void search(){
    string sea;
    cout<<"enter name or Designation to search";
    cin>>sea;
    for(int i=0;i<n;i++){
        if(e[i].empdes==sea || e[i].empname==sea){
            cout<<"found";
            break;
        }
        else{
            continue;
        }
    }
    showMenu();
}
void showMenu()
{
  
    cout << "-------------------------"
         << "Employee"
         << " Management System"
         << "-------------------------\n\n";
  
    cout << "Availiable Options:\n\n";
   
    cout << "add   (1)\n";
    cout << "view       (2)\n";
    cout << "Search    (3)\n";
    cout << "Exit                (4)\n";
  
    int option;
  
    // Input Options
    cin >> option;
  
    // Call function on the bases of the
    // above option
    if (option == 1) {
        add();
    }
    else if (option == 2) {
        view();
    }
    else if (option == 3) {
        search();
    }
    else if (option == 4) {
        return;
    }
    else {
        cout << "Expected Options"
             << " are 1/2/3/4/5";
        showMenu();
    }
}
int main(){
   showMenu();
   /* int n;
    cout<<"Enter how many employees to be added:  ";
    cin>>n;*/
    
    
    
    
}