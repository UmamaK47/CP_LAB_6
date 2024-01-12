/*
//TASK 1
#include<iostream>
using namespace std;
int reverseNumber(int number)
{
    int reverse = 0, rem;
    while (number != 0) {
        rem = number % 10;  //calculates rightmost digit
        reverse = reverse * 10 + rem;   //appends rightmost digit to the beginning
        number = number / 10; //removes rightmost digit
    }
    return reverse;
}
int main()
{
    cout << "-----Welcome-----\n";
    cout << "Enter a number you want to reverse: ";
    int number;
    cin >> number;
    cout << endl << "reverse: " << reverseNumber(number);

    return 0;
}


//TASK 2

#include <iostream>
using namespace std;
double power(double num, int pow=2)
{
    double result=1;
    for(int i=1; i<=pow; i++)
    {
        result*=num;
    }


   return result;
}
int main() {
    double n;
    int p;
    cout<<"-----Welcome to Power Calculator-----\nEnter your Number and the power you want to raise it to: \nNumber: ";
    cin>>n;
    cout<<"\nPower: ";
    cin>>p;
    cout<<"Result: "<<power(n, p);

    return 0;
}


//TASK 3
#include<iostream>
using namespace std;
char upper(char alpha);
int main()
{
    char alpha, up;
    cout<<"-----Welcome-----\nEnter a lowercase alphabet: ";
    cin>>alpha;
    //up=toupper(alpha);
    cout<<"Uppercase: "<<upper(alpha);
    return 0;
}
char upper(char alpha)
{
    return toupper(alpha);
}

//TASK 4
#include<iostream>
using namespace std;
// function to calculate parking charges
int calculatecharges(int hours); //function prototype
int main() {
    //input for three users
    int hour1, hour2, hour3;
    cout << "ENTER THE HOURS:" << endl;
    cin >> hour1 >> hour2 >> hour3;
    // calculate charges for each one
    int charge1 = calculatecharges(hour1); //function call
    int charge2 = calculatecharges(hour2); //function call
    int charge3 = calculatecharges(hour3); //function call
    //display in tabular form
    int totalhours = hour1 + hour2 + hour3;
    int totalcharges = charge1 + charge2 + charge3;
    cout << "\nCARS" << "\t" << "HOURS" << "\t" << "CHARGES" << endl;
    cout << "1\t" << hour1 << "\t" << charge1 << endl;
    cout << "\n2\t" << hour2 << "\t" << charge2 << endl;
    cout << "\n3\t" << hour3<< "\t" << charge3 << endl;
    cout << "\n TOTAL\t" << totalhours << "\t" << totalcharges << endl;
    system("pause");
    return 0;
}
int calculatecharges(int hours) {
    const float minimumfee = 2;
    const float hourlyrate = 0.50;
    const float maxcharge = 10.00;
    // minimum charge
    int totalcharge = minimumfee;
    // additional charges for hours exceeding 3 hours
    if (hours > 3.0) {
        totalcharge += (hours - 3.0) * hourlyrate;
    }
    //charge to the maximum allowed
    if (totalcharge > maxcharge) {
        totalcharge = maxcharge;
    }
    return totalcharge;
}

//TASK 5
#include <iostream>
using namespace std;
float largeDistance(float d1, float d2);
int main() {
    float distance1, distance2;
    cout<<"-----Welcome-----\nEnter Two Distances: \nDistance 1: ";
    cin>>distance1;
    cout<<"\nDistance 2: ";
    cin>>distance2;
    cout<<"The larger distance entered is: "<<largeDistance(distance1, distance2);

    return 0;
}
float largeDistance(float d1, float d2)
{
    if(d1>d2)
    {
        return d1;
    }
    else
    {
        return d2;
    }

}

//EXTRA TASK 1
#include <iostream>
#include<string>
using namespace std;
void sendMessage(string& message);
void recieveMessage(string& message);
void call(string& caller, string& reciever);
void ring();
int main() {
    string message1="Hello, how are you?";
    string message2="Hi, I'm fine.";
    string caller="Umama", reciever="Tayyaba";
    sendMessage(message1);
    recieveMessage(message2);
call(caller, reciever);
    return 0;
}
void sendMessage(string& message){
    cout<<"\nSender's Message: "<<message;
}
void recieveMessage(string& message){
    cout<<"\nReciever's Message: "<<message;
}
void call(string& caller, string& reciever){
 cout<<"\nCalling "<<reciever<<" from "<<caller;
 ring();
}
void ring(){
    cout<<"\nRinging....";
    string response;
    while(true){
        cout<<"\nWaiting for reciever to pick up...Press P to pickup";
        cin>>response;
        if(response=="P" || response=="p"){
            cout<<"Call picked up!";
            break;
        }
    }
}
*/