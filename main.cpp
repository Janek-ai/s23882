#include <iostream>
using namespace std;

int main()
{
	string login_wlasciwy = "misiu";
	string login;
	string haslo_wlasciwe = "abc123";
	string haslo;

	cout << "Aby siê zalogowaæ musisz wprowadziæ prawidlowy login i haslo \n";
	cout << "Prosze podac login uzytkownika \n";
	cout << "Login: ";
	cin >> login;
	if (login != login_wlasciwy)
	{
		cout << "Nie ma takiego uzytkownika \n";
		system("pause");
	}
	else {
		cout << "Teraz prosze podac haslo \n";
		cout << "Haslo: ";
		cin >> haslo;
		if (haslo == haslo_wlasciwe)
		{
			cout << "Zapraszamy \n";
			system("pause");
		}
		else {
			cout << "Podales zle haslo \n";
			system("pause");
		}
	}
}
