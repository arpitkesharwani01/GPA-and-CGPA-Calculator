
#include <iostream>
#include <stdlib.h>
using namespace std;

// calculation class start 
class Calculation {
public:
  void calculateGPA();
  void calculateCGPA();
  void calculateResearchScore();
  void method();
};
// calculation class end 


// main function start 
int main() {
  Calculation c;
  system("cls");
  int input;
  cout << "------------------------------------------------------"
       << "\n";
  cout << "      Calculation of GPA and CGPA" << endl;
  
  cout << "          1. GPA" << endl;
  cout << "          2. CGPA" << endl;
  cout << "          3. Method" << endl;
  cout << "          4. Exit" << endl;
  cout << "------------------------------------------------------"
       << "\n";

  sub:
  cout<<endl;
  cout << "      Select any one out of these" << endl;
  cin>>input;
  

  switch(input){
    case 1:
      c.calculateGPA();
      break;
    case 2:
      c.calculateCGPA();
      break;
    case 3:
      c.method();
      break;
    case 4:
      exit(EXIT_SUCCESS);
      break;
    default:
      cout<<"Invalid Input. Enter the correct choice"<<endl;
      goto sub;
    
  }
}
// main function end 

// calculating GPA start
void Calculation :: calculateGPA(){
  int subPoint;
  system("cls");
  cout<<"------------Calculating GPA------------"<<endl;
  cout<<"How many subject's point do you want to calculate"<<endl;
  cin>>subPoint;
  float credit[subPoint];
  float point[subPoint];

  float total;
  float sum = 0;
  for(int i = 0; i< subPoint; i++){
    cout<<"Enter the credit for the subject"<<endl;
    cin>>credit[i];
    cout<<"Enter the point of the subject"<<endl;
    cin>>point[i];
    total = credit[i] * point[i];
    sum = sum + total;
  }

  float totalCredit = 0;
  for(int i = 0; i<subPoint; i++){
    totalCredit += credit[i];
  }

  cout<<"Your GPA is "<<sum/totalCredit<<endl;

  sub:
  int input;
  cout<<"Do you want to calculate again?"<<endl;
  cout<<"2. go to main menu"<<endl;
  cout<<"3. exit"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>input;
  switch(input){
    case 1:
      calculateGPA();
      break;
    case 2:
      main();
      break;
    case 3: 
      exit(EXIT_SUCCESS);
      break;
    default:
      cout<<"Invalid Input"<<endl;
      goto sub;
  }
}
// calculating GPA end 

// calculation for CGPA start
void Calculation:: calculateCGPA(){
  system("cls");
  int sem;
  cout<<"--------------Calculating CGPA--------------"<<endl;
  cout << "Enter the number of semesters: "<<endl;
  cin>>sem;
  float semResult[sem];
  float semTotal = 0;
  cout<<"Enter semester result in GPA"<<endl;
  for(int i = 0; i< sem; i++){
    cin>>semResult[i];
    semTotal += semResult[i];
  }

  cout<<"Your CGPA is : "<<semTotal/sem<<endl;

  sub:
  int input;
  cout<<"1. Do you want to calculate again?"<<endl;
  cout<<"2. Do you want to go to main menu?"<<endl;
  cout<<"3. exit"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>input;
  switch(input){
    case 1:
      calculateCGPA();
      break;
    case 2:
      main();
      break;
    case 3:
      exit(0);
    default:
      cout<<"Invalid choice"<<endl;
      goto sub;
  }

}
// calculatinig CGPA end 

// method to find GPA and CGPA start
void Calculation:: method(){
  system("cls");
  cout<<"************************************************************"<<endl;
  cout<<"------------Method of calculating GPA and CGPA--------------"<<endl;
  cout<<"         GPA = sum of (credit*point)/total of credits"<<endl;
  cout<<"         CGPA = sum of GPA / number of semesters"<<endl;
  cout<<"************************************************************"<<endl;

  sub:
  int input;
  cout<<"1. Go to main menu"<<endl;
  cout<<"2. exit"<<endl;

  cout<<"Enter your choice: ";
  cin>>input;
  switch(input){
    case 1:
      main();
      break;
    case 2: 
      exit(EXIT_SUCCESS);
      break;
    default:
      cout<<"Invalid Input. Enter the correct choice"<<endl;
      goto sub;
  }
}
// method for finding GPA and CGPA end 