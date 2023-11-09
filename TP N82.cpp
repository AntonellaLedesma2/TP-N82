#include <bits/stdc++.h>
using namespace std;

vector<int>GenerarVector(vector<int>V , int n);
int SumaDeElementos(vector<int>V);
void MostrarVector(vector<int>V);

int main(){
	vector<int>V;
	int n;
	int resultado;
	cout<<"ingrese la cantidad de elemntos del vector: "<<endl;
	cin>>n;
	
	cout<<"ingrese los numeros: "<<endl;

    resultado=SumaDeElementos(V);
	
	cout<<"los numeros pares divisibles por 3 son: "<<resultado<<endl;
	
	 return 0;
}
vector<int>GenerarVector(vector<int>V , int n){
	for(int i=0 ; i<n ; i++){
		int num; 
		cin>>num;
		V.push_back(num);
	} 
	return V;
}
int SumaDeElementos(vector<int>V){
int suma=0;
	for(int i=0 ; i<V.size() ; i++){
		if(i%3 == 0 && V[i]%2 == 0){
			suma+= V[i];
		}
	}
	return suma;
}
void MostrarVector(vector<int>V){
	for(int i=0 ; i<V.size() ; i++){
		cout<<V[i];
	}
	cout<<endl;
}
