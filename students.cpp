#include <iostream>
using namespace std;

struct student
{
    char name[100];
    int age;
    int indexno;
    char gender[1];
    char adress[250];
    char dob[10];
    int countSt;
   
    
} s[5];

int main()
{
     float average,sum=0.0;
     int studentcount=0;
    cout << "Enter information of students: " << endl;
 
    for(int i = 0; i < 5; ++i)
    {
        s[i].countSt = i+1;
        cout << "Student number " << s[i].countSt << "," << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter Age: ";
        cin >> s[i].age;
        
        cout << "Enter Index No: ";
        cin >> s[i].indexno;
        
        cout << "Enter Gender (M/F): ";
        cin >> s[i].gender;
        
        cout << "Enter Address: ";
        cin >> s[i].adress;
        
        cout << "Enter Date Of Birth: ";
        cin >> s[i].dob;

        cout << endl;
    }
    
        cout << "Displaying Information: " << endl;
 
    for(int i = 0; i < 5; ++i)
    {
       cout << "\nStudent number: " << i+1 << endl;
       cout << "Name: " << s[i].name << endl;
       cout << "Age: " << s[i].age << endl;
       cout << "Index No: " << s[i].indexno << endl;
      cout << "Gender: " << s[i].gender << endl;
       cout << "Adress: " << s[i].adress << endl;
       cout << "Date Of Birth : " << s[i].dob << endl;
	   
	   //cal sum for average
        sum += s[i].age;
        studentcount=i+1;
        
    }
	//cal average
	
       average = sum / studentcount;
        cout << "Average = " << average;
    //*******
  
    return 0;
   
}