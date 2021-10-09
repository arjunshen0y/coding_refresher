//write a program to check if a given number exists from a list of numbers
#include <iostream>

using namespace std;

bool search(int ar[], int size, int num) {
   
    for(int i = 0 ; i < size ; i++){
        if(num == ar[i]) {
            return true;
        }    
    }
    return false;    
        
}

int main(){
    int ar[20],num,size;
    bool number_exist;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter the number to search: ";
    cin>>num;
    cout<<"Enter an array: ";
    for(int i = 0 ; i<size ; i++) {
        cin>>ar[i];
    }
    number_exist = search(ar,size,num);
    if(number_exist == true) {
        cout<<"Number Exist";
    }
    else {
        cout<<"Number Doesn't Exist";
    }    
        
    return 0; 
}
    
