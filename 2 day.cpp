#include<iostream>
using namespace std;

class Vector{
	public:
		
	int x;
	int y;
	Vector(){
	x = 10;
	};
	
};
int main(){
	Vector  des;
	des.x = 100;
	cout << des.x;
	}
