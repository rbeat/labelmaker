#include <iostream>
#include <conio.h>
#include <time.h>
#include <cctype>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;


void main() {
	system("color 17");
	ofstream write("C:\\beere\\-.txt");
	//
	time_t t = std::time(0);
	tm * local = std::localtime(&t);
	cout << "Date/Time:" << endl;
	cout << std::put_time(local, "%F") << std::endl;
	cout << std::put_time(local, "%T") << std::endl;
	cout << "\n";
	//
	int selection[2];
	cout << "Type # from menu and then, press \"Enter\"" << endl;
	cin >> selection[0];
	cout << "\n\nVolume:\n1 liter - press \"1\"\n1.5 liters - press \"2\"\nThen press \"Enter\"" << endl;
	cin >> selection[1];
	system("cls");
	write << "תאריך ושעת מזיגה:" << put_time(local, "%F") << " " << put_time(local, "%T") << endl;
	switch (selection[0]) {
	case 1: {
		write << "Jem\'s 8.8";
		break;
	}
	case 2:{ 
		write << "Alexander"; break;
	}
	case 3: {
		write << "Jem\'s Pils"; break;
	}
	case 4:{ write << "Negev Oasis"; break;
	}
	case 5:{ write << "Malka"; break;
}
	case 6:{ write << "Negev PA"; break;
	}
	case 7:{ write << "Blue Moon"; break;
	}
	case 8:{ write << "Liefmans"; break;
	}
	case 9:{ write << "Blanche De Bruxelles\n"; break;
	}
	case 10:{ write << "Hobgoblin"; break;
	}
	case 11:{ write << "La Chouffe"; break;
	}
	case 12:{ write << "Erdinger"; break;
	}
	case 13:{ write << "La Trappe"; break;
	}
	case 14:{ write << "Tucher"; break;
	}
	case 15:{ write << "Pilsner"; break;
	}
	case 16:{ write << "Kozel Dark"; break;
	}
	case 17:{ write << "Kozel Prem"; break;
	}
	case 18:{ write << "Bitburger"; break;
	}
	case 19:{ write << "Edelweiss"; break;
	}
	case 20:{ write << "Benedikriner"; break;
	}
	case 21:{ write << "Peroni"; break;
	}
	case 22:{ write << "Staropramen"; break;
	}
	case 23:{ write << "Paulaner"; break;
	}
	case 24:{ write << "Benedikt Dunkel"; break;
	}
	case 25:{ write << "Barbar Blonde"; break;
	}
	case 26:{ write << "Barbar Bok"; break;
	}
	case 27:{ write << "Maredsous"; break;
	}
	case 28:{ write << "Kasteel"; break;
	}
	default: main();
	}
	switch (selection[1]) {
	case 1:{ write << " 1L" << endl; break;
	}
	case 2:{ write << " 1.5L" << endl; break;
	}
	default: main();
	}
	write << "טלפון למשלוחים: 03-7622256" << endl;
	write << "תפריט בירות: www.beerpoint.beer" << endl;
	write.close();
	system("notepad /p C:\\beere\\-.txt");
}