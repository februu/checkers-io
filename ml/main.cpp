#include "main.h"

int main() {
	BazaDanych bd;
	Szyfrowanie sec;
	int prosba_o_dadanie_gracza_Y = 11;

	if (bd.inicjuj_polaczenie()) return -1;

	int dane = sec.rozszyfruj(bd.pobierz_dane());

	BazaDanych::dodaj_entry(prosba_o_dadanie_gracza_Y, &dane);

	if (BazaDanych::test(dane)) return -1;

	dane = sec.szyfruj(dane);

	if (!bd.wyslij_dane(dane)) return 0;

	return -1;



}