#include<iostream>
using namespace std;

#define A 4.0
#define A_plus 4.0
#define A_minus 3.7
#define B_plus 3.3
#define B 3.0
#define B_minus 2.7
#define C_plus 2.3
#define C 2.0
#define C_minus 1.7
#define D_plus 1.3
#define D 1.0
#define F 0.0


int main(){
    float total_credits = 0;
    float accquired_credits = 0;
    int num;
    int semester;
    cout << "Enter the number of semester you attented college: ";
    cin >> semester;
    cout << endl;
    cout<< "Enter the number of total subjects: ";
    cin >> num;
    cout << endl;

    int j= 1;

    while(j<=semester){
        cout<<"------------- For semester " << j<<" -------------------";
        cout << endl;
        int i = 1;
        while(i<= num){
        int credits;
        float grade_point;
        cout<< "Enter the number of credits for  subject "<<i<<" : ";
        cin >> credits;
        cout<<endl;
        total_credits += credits;
        cout<< "Enter the number of grade points you got for  subject "<<i<<" : ";
        cin >> grade_point;
        cout<<endl;
        accquired_credits += credits *grade_point;


        i++;
    }
    j++;
    }
    cout<<"Your cumulative gpa according to the given data is " << accquired_credits/total_credits<<endl;

}