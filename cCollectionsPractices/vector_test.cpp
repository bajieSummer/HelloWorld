#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    typedef vector<int> MyVector;
    MyVector *m1 = new vector<int>();
    m1->push_back(7);
    m1->push_back(9);
    m1->push_back(3);
    m1->push_back(11);
    m1->push_back(5);
    sort(m1->begin(),m1->end());
    MyVector::iterator it = m1->begin();
    //auto f_add = [&](int a,int b)->int{return a+b;};  
    /*auto pfun =[]{
        cout<<"22";
    }*/
    /*auto pfun = [](){
        //cout<<*it;
        it++;
    };*/
    //for_each(m1->begin(),m1->end(),pfun());
    std ::for_each ( m1-> begin (), m1-> end (),[&]( int d ){ std ::cout <<d <<",";}); 
}
