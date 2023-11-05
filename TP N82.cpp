#include <bits/stdc++.h>
using namespace std;

int SumaDeElementos(const vector <int> & V);
	int main(){
		vector<int>V;
		int n;
		
		cout<<"ingrese la cantidad de numeros: "<<endl;
		cin>>n; 
		
		cout<<"ingrese los numeros: "<<endl;
		
		for(int i=0 ; i<n ; i++){
			int num;
			cin>>num; 
			V.push_back(num);
		}
		int resultado=SumaDeElementos(V);
		
		cout<<"los numeros divisibles por 3, son: "<<resultado<<endl;
		
		return 0;
	}
int SumaDeElementos(const vector<int> & V){
	int suma=0;
	for(int i=0 ; i<V.size() ; i++){
		if(i%3 == 0 && V[i]%2 == 0){
			suma+= V[i];
		}
	}
	return suma;
}