#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Carte{
	public:
		Carte(char *titlu){
			strcpy(Carte::titlu, titlu);
		}
		void arata_titlu(){
			cout << titlu << endl;
		}
	private:
		char titlu[64];
};

class FisaBiblioteca : public Carte{
	public:
		FisaBiblioteca(char *titlu, char *autor, char *editura):
			Carte(titlu){
				strcpy(FisaBiblioteca::autor,autor);
				strcpy(FisaBiblioteca::editura, editura);
		}
		void arata_Biblioteca(){
			arata_titlu();
			cout << autor << ' ' << editura;
		}
	private:
		char autor[64];
		char editura[64];
};

void main(){
	FisaBiblioteca fisa("Jamsas C/C++","Jamsa & Klander", "Jamsa Press");
	fisa.arata_Biblioteca();
	system("pause");

}
