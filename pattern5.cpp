//program to print pattern 5
/* 
5 4 3 2 1
5 4 3 2
5 4 3 
5 4
5
*/
#include<iostream>

int main(){
    for(int row = 0; row < 5; row++){
        for(int col = 5; col > row ; col--){
            std::cout<<col<<" ";            
        }
        std::cout<<std::endl;
    }
}
