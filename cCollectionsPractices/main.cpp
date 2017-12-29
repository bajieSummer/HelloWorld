#include<iostream>
//#include<iterator>
#include<array>
int main(){
    std::cout<<"hello world array";
    typedef std::array<int,3> MyIntArray;
    MyIntArray marray = {2,3,4};
    MyIntArray::iterator iter = marray.begin();
    while(iter!=marray.end()){
        std::cout<<*iter;
        iter++;
    }
   // std::iterator<MyIntArray>  = marray.begin();

}