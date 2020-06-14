#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <iostream>
#include <time.h>

using namespace std;

struct funcacao{

	string inverter(string palavra){
		string nova = "";

		for(int index = 0; index < palavra.length(); index++){
			if(palavra[index] == ' '){
			}
			else{
				palavra[index] = tolower(palavra[index]);
				nova = palavra[index] + nova;
			}
		}
		return(nova);
	}

	string space(string palavra){
		string nova = "";

		for(int index = palavra.length() - 1; index >= 0; index--)
			if(palavra[index] == ' '){
			}
			else{
				palavra[index] = tolower(palavra[index]);
				nova = palavra[index] + nova;
			}
		return(nova);
	}
};


#endif // PILHA_H_INCLUDED