#include <iostream>

#define G 9.80665

using namespace std;

float MULT(float g, float t){
	return 0.5 * g * t * t;
}

int main(){
	cout << "Enter seconds passsed: ";
	float t, x;
	cin >> t;
	x = MULT(G,t);
	cout << "Distance: " << x ;
	return 0;
}


