#include <iostream>
#include <string>
#include <string.h>

using namespace std;

#define nextStr(STR,COUNT) while(STR[COUNT]++)

char* aux[] = {"23","45","32","32","55"};

typedef struct flowUnit{
	void* vector;
	int type;
}flowUnit,*flowList;

void push_method(char* vector,char* x){
	char pos;
	pos = vector[0]+1;
	strcpy(&vector[pos],x);
	vector[0] += strlen(x)+1;
}
void acess_method(char* vector,int length){
	int i,j;
	for(i = 0,j = 1; i < length;i++){
		//cout << &vector[j] << endl;
		for(; vector[j++] != 0;);
	}
}

int main() {
	cout << "wat\n";
	int i = 0;
	flowUnit unidade;
	unidade.type = sizeof(char*);
	char buffer_str[100];
	buffer_str[0] = 0;
	
	unidade.vector = buffer_str;
	flowList unit = &unidade;
	
	//push_method((char*)(unit->vector),aux[0]);
	//push_method((char*)(unit->vector),aux[1]);
	for(i = 0; i < 5; i++){
		cout << "push do número " << aux[i] << " feito\n";
		push_method((char*)(unit->vector),aux[i]);
	}
	//cout << buffer_str <<endl;
	acess_method((char*)(unit->vector),5);
	
	
	/*if (unit->type == sizeof(char*)){
		int j,k;
		char* str = (char*)unit->vector;
		for (j = 0; j < i; ++j){
			nextStr(str,k);
		}
	}*/
    cout << "Hello World!\n";
    return 0;
}