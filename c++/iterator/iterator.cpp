#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

#define nextStr(STR,COUNT) while(STR[COUNT]++)

char* numeros[] = {"23","45","32","32","55"};

typedef struct flowUnit{
	void* arr;
	int type;
}flowUnit,*flowList;

void push_method(char* vector,char* x){
	char pos;
	pos = vector[0]+1;
	strcpy(&vector[pos],x);
	vector[0] += strlen(x)+1;
}
void acess_method(char* vector,int length){
	int i = 0;
	for(; vector[i++] != 0;);

}

vector <char*> lista;
vector <char*>::iterator itera;
int main() {
	
	int i;
	char* aux[10];
	
	for (i = 0; i < 5;i++){
		lista.push_back(numeros[i]);
	}
	for(itera = lista.begin() ; itera != lista.end();itera++){
		cout << *itera << endl;
	}
	
    cout << "Hello World!\n";
    return 0;
}