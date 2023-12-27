#pragma once

class BazaDanych {
	public:

		static void dodaj_entry(int entry, int* dane) {
			
		}

		// Sprawdza poprawnoœæ danych.
		static int test(int dane) {
			return 0;
		}

		int pobierz_dane() const {
			return 0;
		}
		int wyslij_dane(int dane) const {
			return 0;
		}
		int inicjuj_polaczenie() {
			__uwierzytelnij();
			return 0;
		}
	private:
		int __uwierzytelnij() {
			return 0;
		}
};

class Szyfrowanie {
	public:
		int szyfruj(int dane) {
			return 0;
		}
		int rozszyfruj(int dane) {
			return 0;
		}
	private:
		int klucz;
};

