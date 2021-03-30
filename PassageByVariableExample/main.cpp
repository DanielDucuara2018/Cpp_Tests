#include <iostream>

using namespace std;

void test(int *pj)  /* test attend l'adresse d'un entier... */
{
    *pj=2;          /* ... pour le modifier. */
    return;
}

int main(){
    int i=3;
    cout << "the value of i  before test execution is " << i << endl ; /* Ici, i vaut 3. */
    test(&i);       /* On passe l'adresse de i en paramètre. */
    cout << "the value of i  after test execution is " << i << endl ; /* Ici, i vaut 2. */
    return 0;
}