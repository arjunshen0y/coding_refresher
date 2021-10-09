//write a program to count number of vowels in a given string

#include <iostream>
#include <string>


int main(){
    
    int count = 0;
    std::string input_string;
    std::cout<<"Enter a String :";
    std::cin>>input_string;
    for(int i = 0 ; i < input_string.size() ; i++){
        switch(i){
            case 1:
                if(input_string[i] == 'a')
                    count++;
            case 2:
                if(input_string[i] == 'e')
                    count++;
            case 3:
                if(input_string[i] == 'i')
                    count++;
            case 4:
                if(input_string[i] == 'o')
                    count++;
            case 5:
                if(input_string[i] == 'u')
                    count++;
        }
    }
    std::cout<<"The Number of Vowels are :"<<count;
   
    return 0;
}
