#include<iostream>
#include<string>
using namespace std;

int main(){
    int age,h,property;
    string status;
    cout << "Enter your age: ";
    cin >> age;


    if(age <= 20){
        cout << "Enter your height: ";
        cin >> h;
        if(h >= 160){
            if(h >= 175){
            cout << "Enter your property: ";
            cin >> property;
            if(property > 69000000){
                status = "MARRIED";
                }
            else{
                status = "ONE-NIGHT-STAND";
                }
            }
            else if(h < 175){
            status = "FRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }
    }
    else{
        if(age < 30){
            cout << "Enter your property: ";
            cin >> property;
            if(property > 10000000){
                status = "BEST FRIEND";
            }
            else{
                status = "UNFRIEND";
            }
        }
        else{
            status = "UNFRIEND";
        }
    }
    cout << "Your status = "<<status;

}