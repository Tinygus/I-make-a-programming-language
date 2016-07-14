#include <iostream>
#include <string>
using namespace std;
int getal, teller, bewerking;
string kaas;
int main(){
	cin >> getal;
	for(int i = 0; i < getal; i++){
		cin >> kaas;
		char name, name2;
		int a, d;
		if(kaas[0] == 'g' && kaas[1] == 'e' && kaas[2] == 't' && kaas[4] == '='){
			teller++;
			if(teller == 1){
				a = kaas[5] - '0';
			}
			else if(teller == 2){
				d = kaas[5] - '0';
			}
			cout << kaas[3] << " = " << kaas[5] << endl;
			if(teller == 1){
				name = kaas[3];
			}
			else if(teller == 2){
				name2 = kaas[3];
			}
		}
		if(kaas[0] == '^' && kaas[1] == '(' && kaas[kaas.size()-1] == ')'){
			kaas = kaas.substr(2, kaas.size()-3);
			for(int j = 0; j < kaas.size(); j++){
				if(kaas[j] == '_'){
					kaas[j] = ' ';
				}
			}
			cout << kaas << endl;
		}
		while(true){
			int b = kaas[0] - '0';
			int c = kaas[2] - '0';
			if(kaas[0] == name){
				b = a;
			}
			else if(kaas[0] == name2){
				b = d;
			}
			if(kaas[2] == name){
				c = a;
			}
			else if(kaas[2] == name2){
				c = d;
			}
			if(kaas[1] == '+'){
				cout << b + c << endl;
				bewerking = b + c;
			}
			else if(kaas[1] == '-'){
				cout << b - c << endl;
				bewerking = b - c;
			}
			else if(kaas[1] == '*'){
				cout << b * c << endl;
				bewerking = b * c;
			}
			else if(kaas[1] == '/'){
				cout << b / c << endl;
				bewerking = b / c;
			}
			break;
		}
		if(kaas[0] == '^' && kaas[1] == name){
			if(kaas[2] == 'E'){
				cout << a << endl;
			}
			else{
				cout << a;
			}
		}
		else if(kaas[0] == '^' && kaas[1] == name2){
			if(kaas[2] == 'E'){
				cout << d << endl;
			}
			if else(kaas[2] == 'N'){
				cout << d;
			}
		}
		if(kaas[1] == '=' && kaas[0] == name){
			if(kaas[2] = 'B'){
				a = bewerking;
			}
			if else(kaas[2] == 'N'){
				a = kaas[2];
			}
		}
		else if(kaas[1] == '=' && kaas[0] == name2){
			if(kaas[2] = 'B'){
				d = bewerking;
			}
			else{
				d = kaas[2];
			}
		}
	}
}
