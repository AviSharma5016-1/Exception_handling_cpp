#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=0){
        cout<<("Age cannot be zero or negative");
    }
    else{
        cout<<"Your age is: "<<age<<endl;
    }

    return 0;
}

/*OUTPUT
Enter your age: -2
Age cannot be zero or negative
*/
