#include <iostream>

using namespace std;

void test(int &i)   // i est une référence du paramètre constant.
{
    i = 2;    // Modifie le paramètre passé en référence.
    return;
}

int main(){
    int i=3;
    cout << "the value of i  before test execution is " << i << endl ; /* Ici, i vaut 3. */
    test(i);
    // Après l'appel de test, i vaut 2.
    // L'opérateur & n'est pas nécessaire pour appeler
    // test.
    cout << "the value of i  after test execution is " << i << endl ; /* Ici, i vaut 2. */
    return 0;
}