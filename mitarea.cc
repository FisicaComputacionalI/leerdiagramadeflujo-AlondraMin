#include <iostream>

int main(){
int s=12, p; 				
cout<<"Dame un numero entero "<<endl;
cin>>"%d", &p; 			

do{
	if((p%2)==0){			
		cout<<"es Par"<<endl;
		p++;		 		 
	}
	
	if(esPrimo(p)){		
		cout<<"\n El num %i es primo", p<<endl;
		if(p<s){
			s=s-p;
		}else{
			s=s-1;
		}
	}
	
	if(s!=0){	
		p=p+2;
	}
	
	
}while(s!=0);				

	cout<<"\n Resultado de p %i", p<<endl;
	
	return 0;
}

