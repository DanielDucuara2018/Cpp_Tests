#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int &ri = i ;
    ri = ri + 1;
    
    cout << "The value of  i is : " << ri << " accessing from the  reference "<< endl;
    cout << "The value of  i is : " << i << " accessing from the  variable i "<< endl;
    cout << "The adresse of  i is : " << &i << " accessing from the  variable i "<< endl;
    cout << "The adresse of  i is : " << &ri << " accessing from the  reference "<< endl;
    return 0;
}