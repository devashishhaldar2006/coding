#include <iostream>
#include <vector>
using namespace std;
class Stack{
public:

}
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    
}
