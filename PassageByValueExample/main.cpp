#include <iostream>

using namespace std;

void test(int j)    /* j est la copie de la valeur passée en paramètre */
{
    j=3;            /* Modifie j, mais pas la variable fournie par l'appelant. */
    return;
}

int main(){
    int i=3;
    cout << "the value of i  before test execution is " << i << endl ; /* Ici, i vaut 3. */
    test(i);        /* Le contenu de i est copié dans j.  i n'est pas modifié. Il vaut toujours 3. */
    cout << "the value of i  after test execution is " << i << endl ; /* Ici, i vaut 3. */
    return 0;
}