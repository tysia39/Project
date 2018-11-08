#include <iostream>
//#pragma warning(disable:4996)
																					/*		kod dzialajacy w c++
constexpr auto IMIE_NAZWISKO	=	0;	//ilosc strzelonych bramek;;
constexpr auto GOLE				=	1;	//ilosc strzelonych bramek;
constexpr auto WZROST			=	2;	//wartosc wzrostu zawodnika
constexpr auto POZYCJA			=	3;	//pozycja na boisku;
constexpr auto MECZE			=	4;	//ilosc rozegranych meczy;
constexpr auto W_MECZE			=	5;	//ilosc wygranych meczy;
constexpr auto P_MECZE			=	6;	//ilosc przegranych meczy;
constexpr auto WAGA				=	7;	//wartosc wagi zawodnika;
constexpr auto NARODOWOSC		=	8;	//pochodzenie zawodnika;

constexpr auto 		z1			=	1;	//"Lionel Messi"
constexpr auto 		z2			=	2;	//"Cristiano Ronaldo"
constexpr auto 		z3			=	3;	//"Neymar"									*/

//		kod dzialajacy w c/c++
#define		IMIE_NAZWISKO	0;	//ilosc strzelonych bramek;
#define		GOLE			1;	//ilosc strzelonych bramek;
#define		WZROST			2;	//wartosc wzrostu zawodnika
#define		POZYCJA			3;	//pozycja na boisku;
#define		MECZE			4;	//ilosc rozegranych meczy;
#define		W_MECZE			5;	//ilosc wygranych meczy;
#define		P_MECZE			6;	//ilosc przegranych meczy;
#define		WAGA			7;	//wartosc wagi zawodnika;
#define		NARODOWOSC		8;	//pochodzenie zawodnika;

#define		z1				1;	//"Lionel Messi"
#define		z2				2;	//"Cristiano Ronaldo"
#define		z3				3;	//"Neymar"

//using namespace std;





};
//====================================================
//
bool zawodnik_opis(int i)																//funkcja zewnetrzna wywolywana z jednym argumentem
{																						//
	int n = IMIE_NAZWISKO;																//pobieranie wartosci z deklaracji define do int
	if (zawodnik[i][n] == "Brak")
	{
		printf("Nie ma zawodnika pod twoim wyborem.\n");
		return false;
	}
	else if (i <= 6 && i > 0)
	{
		printf("\nWybrano: %s\n\n ===	Opis	===\n", zawodnik[i][n].c_str());		//
		for (int n = 0; n <= 8; n++)													//petla for wykonuje sie x razy
		{																				//
			printf("   * %s: %s\n", zawodnik[0][n].c_str(), zawodnik[i][n].c_str());	//Wyswietla informacje o zawodniku
		}																				//
		printf(" ===	Koniec Opisu	===\n\n");
		return true;									//
	}
	return false;
}																						//====================================================
																						//
int wybor()
{
	printf("\nPokaz szczegoly pilkarza wybierajac przypisany im numer: ");				//
	int wybor = 0;
	scanf("%i", &wybor);																//pobieranie wartosci do zmiennej (liczby calkowitej)
	return wybor;																		//zwracanie wartosci (liczby calkowitej)
}
void lista_pilkarzy()
{																						//
	printf("Lista Pilkarzy:\n");														//
																						//
	for (int i = 1; i <= 6; i++)														//petla for wykonuje sie x razy
	{																					//
		int n = IMIE_NAZWISKO;															//pobieranie wartosci z deklaracji define do int
		printf("  %i. %s\n", i, zawodnik[i][n].c_str());								//Wyswietla liste zawodnikow
	}																					//
}
int main()																				//glowna funkcja rozruchowa aplikacji
{																						//
	lista_pilkarzy();																	//
	int i_zawodnik = wybor();															//
																						//
	if (!zawodnik_opis(i_zawodnik)) {													//
		system("cls");																	//czysci konsole
		printf("Nie ma zawodnika pod twoim wyborem. Sprobuj ponownie. \n\n");
		return main();																	//powrot do funckji main()
	}																					//
																						//
	system("pause");																	//zatrzymanie programu przed zamknieciem
	return 0;																			//wynik koncowy funkcji main domyslnie 0
}