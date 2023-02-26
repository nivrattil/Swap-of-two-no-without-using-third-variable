#include <iostream>
using namespace std;
int main(){
	int a, b;
	cout<< "Enter a: ";
	cin>> a;
	cout<< "Enter b: ";
	cin>> b;
    a=a+b;
	b=a-b;
	a=a-b;
	cout<< "a="<< a<< "\n";
	cout<< "b="<< b;
} 
/* a= 10 b=20 
a=a+b;
b=a-b;
a=a-b;
*/
