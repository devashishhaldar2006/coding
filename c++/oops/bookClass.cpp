#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
class Book{
public:
    char name;
    int price;
    int noOfPages;
    int countBooks(int p){
        if(price<p) return 0;
        else return 1;
    }    
    bool isBookPresent(char book){
        if(name==book) return 1;
        else return 0;
    }    
};
using namespace std;

int main(){

    
    
}
