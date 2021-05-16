// HotelTabajara.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "quartos.h";
#include <iostream>

using namespace std;

int main()
{
	int menu;
	string user;
	int senha;
	bool save;
	bool opc;
	bool login = true;

	while (login) {

		save = false;
		opc = false;

		while (!save) {

			cout << "-----Bem-vindo ao Hotel Tabajara!-----\n\n\n";
			cout << "User: ";
			cin >> user;
			cout << "Senha Numerica: ";
			cin >> senha;

			if (senha == 123 && user == "vini")
			{
				save = true;
			}
			else {
				cout << "Senha ou usuario incorreto\n";
				system("pause");
				system("cls");
			}
		}

		while (!opc) {
			cout << "------MENU------\n\n\n";
			cout << "1. Check in\n";
			cout << "2. Check out\n";
			cout << "3. Agendar estadia\n";
			cout << "4. Cancelar estadia\n";
			cout << "5. Quartos vagos\n";
			cout << "6. Informacoes do hospede\n";
			cout << "7. Retirar relatorio completo do quarto\n";
			cout << "8. Logout\n";

			cin >> menu;

			switch (menu) {
			case 1:
				system("cls");
				checkIn();
				system("pause");
				system("cls");
				break;
			case 2:
				system("cls");
				checkOut();
				system("pause");
				system("cls");
				break;
			case 3:
				system("cls");
				reserva();
				system("pause");
				system("cls");
				break;
			case 4:
				system("cls");
				cancelamento();
				system("pause");
				system("cls");
				break;
			case 5:
				system("cls");
				vagas();
				system("pause");
				system("cls");
				break;
			case 6:
				system("cls");
				hospede();
				system("pause");
				system("cls");
				break;
			case 7:
				system("cls");
				relatorio();
				system("pause");
				system("cls");
				break;
			case 8:
				cout << "Fazendo logout\n";
				opc = true;
				system("pause");
				system("cls");
				break;
			default:
				cout << "Opçao invalida\n";
				system("pause");
				system("cls");
				break;
			}
		}
	}



}
