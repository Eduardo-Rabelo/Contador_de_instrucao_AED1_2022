#include <iostream>
#include <time.h>
#include "Matriz.hpp"
using namespace std;

Matriz::Matriz( int ordem){
	this->ordem=ordem;
	
	srand(time(NULL));
	for (int i=0 ; i < ordem*ordem;i++){
	    this->v.push_back(rand()%99);
	}
	this->inicio=&v[0];
	this->final=&v[(ordem*ordem)-1];
}






void Matriz::setOrdem(int ordem){
	this->ordem=ordem;
}
int Matriz::getOrdem(){
	return this->ordem;
}


int Matriz::getTotal(){
	return this->total;
}

void Matriz::imprimeMatriz(){
    int contl=1,*p=this->inicio,*p2=this->final;
	cout << "\n\n\nMatriz:\n\n" << endl;
    
	while(p<=p2){
	    if(*p>=0 && *p<10 ){
	        cout << "0";
	    }
	    cout << *p << " ";
	    
	    if(contl%ordem==0){
	        cout << "\n";
	    }
	    
	    contl++;
	    p++;
	}
}



void Matriz::conta(){
    
    int contl=1,contc=1,cont=1,*p=this->inicio,*p2=this->final,total=*p;
    
    
    while(p < p2){
		
		if(contl==ordem && p!=p2){
			*p=-1;
			total= total + *(p+1);
			p = (p + 1);
		}
		else if(contc%ordem==0){
			
			if(*(p - 1) > *(p + ordem)){
				total = total + *(p - 1);
				*p=-1;
				p = (p - 1);	
				contc = contc - 1;	
			}
			
			else{
				total = total + *(p + ordem);
				*p=-1;
				p = (p + ordem);
				contl++;		
			} 
		}
		
		else if(contc == 1){
			if(*(p + 1) > *(p + ordem)){
				total = total + *(p + 1);
				*p=-1;
				p = (p + 1);	
				contc++;	
			}
			
			else{
				total = total + *(p + ordem);
				*p=-1;
				p = (p + ordem);
				contl++;		
			} 
			
		}
		
		else{
			if(*(p + 1) > *(p + ordem) && *(p + 1) > *(p - 1) ){
				total = total + *(p + 1);
				*p=-1;
				p = (p + 1);	
				contc++;	
			}
			
			else if(*(p - 1) > *(p + ordem) && *(p - 1) > *(p + 1) ){
				total = total + *(p - 1);
				*p=-1;
				p = (p - 1);	
				contc = contc - 1;	
			}
			
			else{
				total = total + *(p + ordem);
				*p=-1;
				p = (p + ordem);
				contl++;		
			} 
		}
		
	}
	*p=-1;
	this->total=total;
}
