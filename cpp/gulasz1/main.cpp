#include <iostream>

using namespace std;

int main() {
cout << "Program wyswietli loiczby pierwsze od 1 do 1000" <<endl;
for (int i = 0; i<1000; i++)
{
for(int k = i; (k%2==1); k++)
cout << k << endl;
}
return 0;
}
