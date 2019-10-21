

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int opc = 0;
	float number();
	void op(int opc);
	
	cout<<"----Menu-----"<<"\n";
	cout<<"----SUMA----1"<<"\n";
	cout<<"---RESTA----2"<<"\n";
	cout<<"----MULT----3"<<"\n";
	cout<<"----DIVI----4"<<"\n";
	cout<<"--POTENCIA--5"<<"\n";
	cout<<"----RAIZ----6"<<"\n";
	cout<<"Selecciona una opcion"<<"\n";
	cin>>opc;
	
	op(opc);
	
return 0;
}

float number(){
	
	float valor = 0;
	cout<<"Ingresa un valor"<<"\n";
	cin>>valor;
	return valor;
}

void op(int opc){
	float v1 =0;
	float v2=0;
	float t = 0;
	
	if(opc<1 || opc>6){

	}else{

			v1=number();
			v2=number();
	}
	
		switch(opc){
			
			case 1:
				t=v1+v2;
				cout<<"La suma de "<<v1<<" + "<<v2<<" es igual a: "<<t<<"\n";
				break;
			case 2:
				t=v1-v2;
				cout<<"La resta de "<<v1<<" - "<<v2<<" es igual a: "<<t<<"\n";
				break;
			case 3:
				t=v1*v2;
				cout<<"La multiplicacion de "<<v1<<" * "<<v2<<" es igual a: "<<t<<"\n";
				break;
			case 4:
				if(v2==0){
					cout<<"No es posible dividir entre 0\n";
					break;
				}else{
				t=v1/v2;
				cout<<"La divicion de "<<v1<<" / "<<v2<<" es igual a: "<<t<<"\n";
				}
				break;
			case 5:
				t= pow(v1,v2);
				cout<<"La potenciacion de "<<v1<<" elevado a  "<<v2<<" es igual a: "<<t<<"\n";
				break;
			case 6:
				if(v2<=0){
					cout<<"Error";
					break;
				}else{
				
				t= pow(v1,(1/v2));
				cout<<"La raiz "<<v2<<" de "<<v1<<" es igual a: "<<t<<"\n";
				break;
			}
			default:
				cout<<"Ingresaste una opcion no correcta"<<"\n";				
				break;
	}


	
					cout<<"\nDeseas intentarlo otra vez?\n1 = Si\n2 = No"<<"\n";
				int deci = 0;
				cin>>deci;
				if(deci==1){
					cout<<"Selecciona alguna opcion del Menu"<<"\n";
					int deci2 = 0;
					cin>>deci2;
					op(deci2);
				}
}
