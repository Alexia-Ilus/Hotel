#include <iostream>	

using namespace std;

struct Quartos{
	string nome = " ";
	int CPF = 0;
	int CamasC = 0;
	int CamasS = 0;
	bool ocupado = false;
	int dias = 0;
	bool reserv = false;
};	

Quartos quarto[21];

int tipo;
int i;

void checkIn() {
	string nome;
	int CPF;
	int resp;

	cout << "Fazer check in por:\n";
	cout << "1. Nome\n";
	cout << "2. CPF\n";
	cin >> resp;

	switch (resp) {
	case 1:
		cout << "insira o nome do hospede\n";
		cin >> nome;

		for (i = 1; i <= 21; i++)
		{
			if (quarto[i].nome == nome)
			{
				quarto[i].ocupado = true;
				cout << "Entregar chave do quarto " << i << endl;
				break;
			}

			if (i == 21) {
				cout << "Reserva nao encontrado\n";
				break;
			}
		}
		break;
	case 2:
		cout << "insira o CPF do hospede\n";
		cin >> CPF;

		for (i = 1; i <= 21; i++)
		{
			if (quarto[i].CPF == CPF)
			{
				quarto[i].ocupado = true;
				cout << "Entregar chave do quarto " << i;
				break;
			}

			if (i == 21) {
				cout << "Reserva nao encontrado\n";
				break;
			}
		}
		break;
	default:
		cout << "Opcao invalida\n";
		break;
	}

};
void checkOut() {
	string nome;
	int CPF;
	int resp;

	cout << "Fazer check out por:\n";
	cout << "1. Nome\n";
	cout << "2. CPF\n";
	cin >> resp;

	switch (resp) {
	case 1:
		cout << "insira o nome do hospede\n";
		cin >> nome;

		for (i = 1; i <= 21; i++)
		{
			if (quarto[i].nome == nome)
			{
				if (quarto[i].ocupado) {
					quarto[i].ocupado = false;
					cout << "Receber chave do quarto " << i << endl;
					break;
				}
				else if (!quarto[i].ocupado)
				{
					cout << "Quarto nao ocupado\n";
					break;
				}
			}

			if (i == 21) {
				cout << "Quarto nao ocupado\n";
				break;
			}
		}
		break;
	case 2:
		cout << "insira o CPF do hospede\n";
		cin >> CPF;

		for (i = 1; i <= 21; i++)
		{
			if (quarto[i].CPF == CPF)
			{
				if (quarto[i].ocupado) {
					quarto[i].ocupado = false;
					cout << "Receber chave do quarto " << i << endl;
					break;
				}
				else if (!quarto[i].ocupado)
				{
					cout << "Quarto nao ocupado\n";
					break;
				}
			}

			if (i == 21) {
				cout << "Quarto nao ocupado\n";
				break;
			}
		}
		break;
	default:
		cout << "Opcao invalida\n";
		break;
	}

};
void reserva() {

	bool tip = false;

	while (!tip) {
		cout << "Quarto tipo:\n";
		cout << "1. Simples\n";
		cout << "2. Luxo\n";
		cin >> tipo;

		switch (tipo) {
		case 1:
			cout << "Insira um quarto entre o 1 e 10\n";
			cin >> i;

			if (i > 10 || i < 1)
			{
				cout << "Quarto invalido\n";
			}
			else {
				tip = true;
			}

			break;
		case 2:
			cout << "Insira um quarto entre o 11 e 20\n";
			cin >> i;

			if (i > 20 || i < 11)
			{
				cout << "Quarto invalido\n";
			}
			else {
				tip = true;
			}
			break;
		default:
			cout << "Opcao invalida\n";
			break;
		}
	}

	cout << "Insira o nome do hospede\n";
	cin >> quarto[i].nome;
	cout << "Insira o CPF do hospede\n";
	cin >> quarto[i].CPF;
	cout << "Insira a quantidade de camas de casal\n";
	cin >> quarto[i].CamasC;
	cout << "Insira a quantidade de camas de solteiro\n";
	cin >> quarto[i].CamasS;
	cout << "Insira o tempo de hospedagem em dias\n";
	cin >> quarto[i].dias;

	quarto[i].reserv = true;


};
void cancelamento() {
	int CPF;

	cout << "insira o CPF do hospede\n";
	cin >> CPF;

	for (i = 1; i <= 21; i++)
	{
		if (quarto[i].reserv)
		{
			quarto[i].reserv = false;

			cout << "Reserva do quarto " << i << " cancelada\n";
			break;
		}

		if (i == 21) {
			cout << "Quarto nao encontrado\n";
			break;
		}
	}
	
};
void vagas() {
	for (i = 1; i < 21; i++)
	{
		if (quarto[i].reserv)
		{
			if (quarto[i].ocupado)
			{
				cout << "Quarto" << i << " ocupado\n";
			}
			else {
				cout << "Quarto" << i << " reservado\n";
			}
		}

		else if (!quarto[1].reserv) {
			cout << "Quarto " << i << " nao reservado\n";
		}
	}
};
void hospede()
{
	cout << "Informe o quarto desejado\n";
	cin >> i;

	if (i < 21 && i > 0) {
		if (quarto[1].reserv)
		{
			cout << "Hospede: " << quarto[i].nome << endl;
			cout << "CPF: " << quarto[i].CPF << endl;
		}
		else {
			cout << "Quarto nao ocupado\n";
		}
	}
	else {
		cout << "Quarto nao encontrado\n";
	}


}
void relatorio()
{
	string user = "Vinicius Cassol";

	cout << "insira o numero do quarto\n";
	cin >> i;

	if (quarto[1].reserv)
	{
		cout << "Hospede " << quarto[i].nome << endl;
		cout << "CPF do hospede " << quarto[i].CPF << endl;
		cout << "Tempo de estadia " << quarto[i].dias << " dias" << endl;
		cout << "Numero do quarto " << i << endl;
		if (!quarto[i].ocupado) {
			cout << "Quarto nao ocupado\n";
		}
		else if (quarto[i].ocupado) {
			cout << "Quarto ocupado\n";
		}

		cout << "Funcionario que realizou a reserva " << user << endl << endl;
	}
	else {
		cout << "Quarto nao reservado\n";
	}
}