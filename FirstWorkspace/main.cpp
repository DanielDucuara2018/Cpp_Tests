#include <iostream>

using namespace std;

int main(){
    int i = 1;
    int *pi;
    pi = &i;
    *pi = *pi + 1;
    cout << "The value of  i is  : " << *pi  <<  " accessing from the pointer " << endl;
    cout << "The value of  i is : " << i << " accessing from the  variable i "<< endl;
    cout << "The adresse of  i is : " << &i << " accessing from the  variable i "<< endl;
    cout << "The adresse of  i is : " << pi << " accessing from the  pointer "<< endl;
    cout << "The adresse of  the pointer is : " << &pi  << endl;
    return 0;
}