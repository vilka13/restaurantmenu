#include <windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <fstream>

using namespace std;

const string FILE_NAME = "C:/nic.txt";

void welcome(string imie="A") {
	cout << " --------------------------------------------------\a" << endl;  ///// wyświetlenie danych restauracji 
	cout << " Witamy w restauracji Crusty Crabs ul.Hetmanska 100!" << endl;
	cout << " Restauracja czynna 24/7. Godziny dostawy od 8:00 do 23:00" << endl;
	cout << " --------------------------------------------------" << endl;
	cout << " Prosze podac swoje imie i nazwisko:" << endl;                   /////// użytkownik wpisuje swoje imię
	getline(cin, imie);
	system("cls");
	cout << " Witamy \a" << imie << endl;                                    //////// powitanie
}

void crabsmenu() {
	fstream priceofeat;
	priceofeat.open(FILE_NAME, ios::in);           ///////menu pobierane z pliku, gdzie każda pozycja ma nazwę, cenę za porcje oraz główne składniki

	if (priceofeat.good()) {
		string text = "";

		while (!priceofeat.eof())
		{
			getline(priceofeat, text);
			cout << text << endl;
		}

		priceofeat.close();
	}
	else {
		cout << " File not found " << endl;
	}
}

void pozycje(){
	int x=0, b1=0, b2 = 12, f1=0, f2 = 6, n1 = 0, n2 = 5, k1=0, 
	k2=19, s1=0, s2=18, g1=0, g2=9, h1=0, h2=7, summ = 0;
	while (x != 9) {
		cout << " Wybierz:\n 1.CrabsBurger 12zl \n 2.Frytki 6zl\n 3.Cola 5zl\n 4.Kebab 19zl\n";
		cout<< " 5.Salatka Cesar 18zl\n 6.Kawa 9zl\n 7.Herbata 7zl\n\n 9.Konec zamowienia \n 0.Wyjscie." << endl;
	cin >> x;
	switch (x) {
	case 1:
		system("cls");
		cout << " Ile porcji: " << endl;
		cin >> b1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                            ///////4.1. po każdym wyborze cena zbiorcza jest aktualizowana
	case 2:
		system("cls");
		cout << " Ile porcji: " << endl;   ///////3.1. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >> f1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                 ///////4.2. po każdym wyborze cena zbiorcza jest aktualizowana
	case 3:
		system("cls");
		cout << " Ile porcji: " << endl;    ///////3.2. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >> n1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                 ///////4.3. po każdym wyborze cena zbiorcza jest aktualizowana
	case 4:
		system("cls");
		cout << " Ile porcji: " << endl;    ///////3.3. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >> k1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                ///////4.4. po każdym wyborze cena zbiorcza jest aktualizowana
	case 5:
		system("cls");
		cout << " Ile porcji: " << endl;    ///////3.4. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >> s1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                       ///////4.5. po każdym wyborze cena zbiorcza jest aktualizowana
	case 6:
		system("cls");
		cout << " Ile porcji: " << endl;    ///////3.5. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >>g1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                   ///////4.6. po każdym wyborze cena zbiorcza jest aktualizowana
	case 7:
		system("cls");
		cout << " Ile porcji: " << endl;    ///////3.6. użytkownik ma możliwość wybrania liczby porcji danego dania
		cin >> h1;
		cout << " Summa = " << (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2) << " zl" << endl;
		break;                                       ///////4.7. po każdym wyborze cena zbiorcza jest aktualizowana
	case 9:
		system("cls");
		break;
	case 0:
		exit(0);
	default:
		return pozycje();
		system("cls");
	}
	} 
	if (b1 != 0 ) {
		cout << " Zamowiles " << b1 << " CrabsBurger" << endl;
	}
	if (f1 != 0) {
		cout << " Zamowiles " << f1 << " Frytki " << endl;
	}
 if (n1 != 0) {
	 cout << " Zamowiles " << n1 << " Cola " << endl;
 }
 if (k1 != 0) {
		cout << " Zamowiles " << k1 << " Kebab " << endl;
	}
 if (s1 != 0) {
	 cout << " Zamowiles " << s1 << " Salatka " << endl;
 }
 if (g1 != 0) {
	 cout << " Zamowiles " << g1 << " Kawa " << endl;
 }
 if (h1 != 0) {
	 cout << " Zamowiles " << h1 << " Herbata " << endl;
 }
 cout << "===========================" << endl;
    summ = (b1 * b2) + (f1 * f2) + (n1 * n2) + (k1 * k2) + (s1 * s2) + (g1 * g2) + (h1 * h2);
	cout << " Summa = " << summ <<" zl "<< endl;
}

void zamowienie(int wybor = 0, float godz = 0, string adres = "A", int stolik = rand() % 25 + 1) {  ///////1.0
	srand(time(NULL));
		cout << " Wybierz: \n 1.Na miejscu \n 2.Na dowoz\n 9.Powrot" << endl;    ////////// użytkownik wybiera, czy danie ma być dostarczone na miejscu czy na dowóz
		cin >> wybor;
		system("cls");

		switch (wybor) {
		case 1:
			cout << " Twoj numer stolika " << stolik << endl;       ///// 1.1 w przypadku wyboru na miejscu, podanie numeru stolika
			system("pause");
			exit(0);
		case 2:
			cout << " Wybrales na dowoz." << endl;
			cout << " Podaj prosze adres: " << endl;
			cin.ignore();
			getline(cin, adres);
			cout << " Podaj prosze godzine dostawy:" << endl;       //////2.1. adres oraz preferowana godzinę z podanego zakresu. Godzina oraz data powinny być sprawdzane, czy mieszczą się w zakresie
			cin >> godz;
			if ((godz <= 8) || (godz >= 23)) {
				system("cls");
				cout << " Dostawa czynna od 8:00 do 23:00" << endl;   ///////2.2. Godziny dostawy
				return zamowienie();
			}
			else {
				cout << " Zamowienie bedzie dostarczone na adres: " << adres << " o godzinie: " << godz << endl;
				exit(0);                                              /// aplikacja wyświetla informacje o planowanym czasie dostawy
			}
			break;
		case 9:
			return pozycje();
		default:
			return zamowienie();
		}
	}

int main()        /////  aplikacja ulega zamknięciu po wyświetleniu komunikatu i oczekiwaniu na naciśnięcie dowolnego klawisza
{
		welcome();
		crabsmenu();
		pozycje();
		for (;;) {
			zamowienie();
		}
}