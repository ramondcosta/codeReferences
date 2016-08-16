#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
	char buffer[100];
	int *p = new (buffer) int[5]; 
	
	int i;
	for(i = 0;i < 5;i++){
		p[i] = i;
	}
	for(i = 0;i < 5*(sizeof(int));i+=sizeof(int)){
		cout << (int*)buffer[i] <<endl;
	}
	for(i = 0;i < 5;i++){
		cout << p[i] <<endl;
	}
	
	
	int *q = new (buffer) int[5]; 
	
	for(i = 0;i < 5;i++){
		q[i] = i*2;
	}
	for(i = 10;i < 50*(sizeof(int));i+=sizeof(int)){
		//cout << (int*)buffer[i] <<endl;
	}
	for(i = 0;i < 5;i++){
		cout << q[i] <<endl;
	}
	
    cout << "Hello World!\n";
}