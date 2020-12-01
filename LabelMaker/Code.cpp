#include <iostream>
#include <conio.h>
#include <time.h>
#include <cctype>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;
void dateEasterEgg();


void main() {
	system("color 17");
	system("title LabelMaker - Beer Point Bat-Yam");
	ifstream file("C:\\beer\\-.txt", ios::in);
	//ofstream write("C:\\beer\\-.txt");
	while (file) {
		string str;
		getline(file, str);
		cout << str;
		// ־בנאבמעךא סענמךט str
	}
	//cout << str;
	system("pause");
	/*
	time_t t = std::time(0);
	tm * local = std::localtime(&t);
	cout << "Beer Point Bat-Yam\nLabelMaker v0.1.8\nUpdated: 26.4.17\n\n";
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
	write << " " << endl;
	write << " " << endl;
	write << "תאריך ושעת מזיגה:" << put_time(local, "%F") << " " << put_time(local, "%T") << endl;
	write << " " << endl;
	switch (selection[0]) {
	case 1: {
		write << "Jem\'s 8.8";
		break;
	}
	case 2: {
		write << "Alexsander"; break;
	}
	case 3: {
		write << "Jem\'s Pils"; break;
	}
	case 4: { write << "Negev Oasis"; break;
	}
	case 5: { write << "Malka Admonit"; break;
	}
	case 6: { write << "Negev Porter"; break;
	}
	case 7: { write << "BLUE MOON"; break;
	}
	case 8: { write << "Liefmans"; break;
	}
	case 9: { write << "Hobgoblin"; break;
	}
	case 10: { write << "W. VITUS"; break;
	}
	case 11: { write << "MC CHOUFFE"; break;
	}
	case 12: { write << "LA CHOUFFE"; break;
	}
	case 13: { write << "Maredsous"; break;
	}
	case 14: { write << "LaTrappe"; break;
	}
	case 15: { write << "Pilsner"; break;
	}
	case 16: { write << "Kozel Dark"; break;
	}
	case 17: { write << "Kozel Premium"; break;
	}
	case 18: { write << "Bitburger"; break;
	}
	case 19: { write << "Edelweiss"; break;
	}
	case 20: { write << "Erdinger"; break;
	}
	case 21: { write << "PERONI"; break;
	}
	case 22: { write << "Staropramen"; break;
	}
	case 23: { write << "PAULANER"; break;
	}
	case 24: { write << "Erdinger Dark"; break;
	}
	case 25: { write << "Hoegaarden"; break;
	}
	case 26: { write << "Weihenstephan"; break;
	}
	case 27: { write << "Stella Artois"; break;
	}
	case 28: { write << "Kasteel"; break;
	}
	case 311: {
		dateEasterEgg();
		break;
	}
	default: main();
	}
	switch (selection[1]) {
	case 1: { write << " 1L" << endl; break;
	}
	case 2: { write << " 1.5L" << endl; break;
	}
	default: main();
	}
	write << "טלפון למשלוחים: 03-7622256" << endl;
	write << "תפריט בירות: www.beerpoint.beer" << endl;
	write.close();
	system("notepad /p C:\\beer\\-.txt");*/
}

void dateEasterEgg() {
	ofstream write("C:\\beer\\-.txt");
	system("mode con:cols=150 lines=60");
	system("color 0a");
	system("start mplay32 /play /close \"c:\\windows\\media\\flourish.mid\"");
	cout << "                   ::::::::::::::::::::::::::::::::         ::::.        .::::    .::::::::.         :::::::::::::::::::::::::::::::.\n";
	cout << "                   ::::::::::::::::::::::::::::::::         ::::         .::::    .::::::::.         :::::::::::::::::::::::::::::::.\n";
	cout << "                   ::::.                      :::::    :::::    .::::         :::::::::::::.         ::::.                      ::::.\n";
	cout << "                   ::::.                      :::::    :::::    .::::         :::::::::::::.         ::::.                      ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::         ::::.    :::::::::         :::::::::     ::::     :::::::::::::     ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::         ::::     :::::::::         :::::::::     ::::.    :::::::::::::.    ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::         ::::     :::::::::     . ..:::::.:..     ::::     :::::::::::::.    ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::         ::::.    :::::::::    .::::::::.         ::::  O  :::::::::::::.    ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::         ::::     :::::::::    .::::::::.         ::::@@.  :::::::::::::.    ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::    :::::    .::::::::.        .::::::::.         :.@@@    :::::::::::::.    ::::.\n";
	cout << "                   ::::.    :::::::::::::.    :::::    :::::    .::::::::.        .::::::::.         @@@o     :::::::::::::.    ::::.\n";
	cout << "                   ::::.                      :::::             .::::    .::::::::.    ::::.       @@@O::.                      ::::.\n";
	cout << "                   ::::.                      :::::             .::::    .::::::::.    ::::.     @@@8::::                       ::::.\n";
	cout << "                   ::::::::::::::::::::::::::::::::    :::::    .::::    .::::    .::::  . .:::@@@@  :::::::::::::::::::::::::::::::. \n";
	cout << "                   ::::::::::::::::::::::::::::::::    :::::    .::::    .::::    .::::     :@@@@    :::::::::::::::::::::::::::::::.\n";
	cout << "                   ::::::::::::::::::::::::::::::::    :::::    .::::    .::::    .::::    8O@O@@@   :::::::::::::::::::::::::::::::.\n";
	cout << "                                                            ::::              :::::::::  CO@C:::@@:                                  \n";
	cout << "                                                            ::::              :::::::::C@@..:::: @@                                  \n";
	cout << "                   ::::.    ::::.    ::::.    :::::                  ::::.    ::::.    O@.:@@::: @@@          ::::         .::::     \n";
	cout << "                   ::::.    ::::.    ::::.    :::::                  ::::.    ::::.    c@@:@@@::  @@8         ::::         .::::     \n";
	cout << "                            ::::.                           ::::         .::::::::::::@@   @@@@ :::@@:::::::::                  ::::. \n";
	cout << "                            ::::.                           ::::.        .::::::::::@@@    @@@@C::::@@::::::::                  ::::.\n";
	cout << "                   .............          ........     .........     .....::::....@@@:     @@.@@O:::C@@ ..::::         .........::::. \n";
	cout << "                   :::::::::              :::::::::    :::::         ::::::::: :@@@O      C@@@@@@::::@@o :::::         :::::::::::::. \n";
	cout << "                   :::::::::             .:::::::::    :::::         ::::::::.@@@@        @@@o:@@c::. O@ :::::         :::::::::::::. \n";
	cout << "                       .::::     :::::::::::::     ::::     ::::         .::@@@@::.      @@@    @@::::::::::::::::.        .::::      \n";
	cout << "                       .::::     :::::::::::::     ::::     ::::         .::@@@C::.  @ @@@@@    8@8:::::::::::::::         .::::      \n";
	cout << "                   ::::.                 .:::::::::::::     ::::   @@:8@8.   @@8  .@@@@8  @@    :@@::::::         .::::    .::::::::. \n";
	cout << "                   ::::.                  :::::::::::::     ::::@@@@@O@@@@   :@@O@@@@O:   @@    :.@@:::::         .::::    .::::::::. \n";
	cout << "                            :::::::::::::.        ..:::.:::.:::@@@C:::.@@@    @@@@        @.::::::@..::::         .::::         ::::. \n";
	cout << "                            :::::::::::::.         ::::::::::@@@@::::::@@@     @@o       @@ :::::::@:::::         .::::         ::::. \n";
	cout << "                            ::::..........     ....:::::::::@@@@@O.....@@@     @@@     @@@  .........::::         ..... .   ..  .:::. \n";
	cout << "                   ::::.    ::::.             ::::::::::::::@@:@@@    @@@@@@: :.@@@  @@@             ::::.             :::::::::::::. \n";
	cout << "                   ::.:.    ::::.             :::.:::::::::.@:::@@@  @@@@@o@@@.::c@@@@               ::::              :::::::::::::. \n";
	cout << "                       .::::::::.    ::::::::.             c    :@@8@@@c:. @@@   @@@        ::::     .:::         .::::    .:::.       \n";
	cout << "                       .::::::::.    :::::::::                   @@@@@.::. @@@      .       ::::     ::::.        .::::    .::::       \n";
	cout << "                   .:::     :::::::::    .:::::::::c::::::::    ..@@@    .:@@o         :::::::::::::::::::::::.::::::::                \n";
	cout << "                   ::.:.    ::::::::.     ::::@@@@@@@@.:::::    .:C@@    .@@@:         ::::::::::::::::::..::::::::::::                 \n";
	cout << "                                            @@@@8   @@@:::::::.:.  @@@:.:O@8O:::.:.    :::::::::.            ..::::::::..::::..:::.:.  \n";
	cout << "                                           @@@       @@:::::::::.   @@:::@.@.:::::.    ::::::::.              ::::::::::::::::::::::.  \n";
	cout << "                                          8@@@@     @@@:::.::.:.    @@@:@Oc:.:..::.    ::::::::.              :::::::.::::.:::::::::.   \n";
	cout << "                   :::::::::::::::::::::::@@:@@@::. @@O          @@@@@@O:o::::     :::::::::::::     .::.     .:::         .::::::::.  \n";
	cout << "                   ::.::...:...:........:c@..c@@o:.@@@            @@ @@@:::::.     .:::::::::::.     .:.:     ::::         .:::...:..   \n";
	cout << "                   .::.                   8   @@@:: @           .::.. O@ .::::::::::::.::::::::.              ::::::::.    .::::       \n";
	cout << "                   :::..                      :@@@@@c         c@@@@@8@@@ ...:::..:::::::::::.::.              .:::::::.    .:::.        \n";
	cout << "                   ::::     :.:.........:.    ::@@@@@@@@@@@O@C@@O    :...         .:::.     .:::..............::...        .:::::.:..  \n";
	cout << "                   :::.     .:::..:.:.:...    .::@@@@C:..:..::...    .:.:          .::.    .::::.:::::.:::.:.:.::.         .::.:::...  \n";
	cout << "                   ::..     ::.:::::::::..    :::.@@@  .   ..::.......::.         ..:::     .............. ....::.      ......  .. .    \n";
	cout << "                   ::.:     ::::.::::::...    .:.:.@@@      :::::::::.:..          .:..                       .:...    .:..            \n";
	cout << "                   .::.     ::.:.::.::.:..    .:::: @@c     ..::..::.:..:          ....                       ..:..    ....            \n";
	cout << "                   ::..     ::...:..:..:..    .:.:.    .:::::.::.:.:.         :..:.    .:...             .:.:.:.:::.:..         ::::.  \n";
	cout << "                   .::..    ...:..........    .:::.    .:....:.::.::.         :.:..    .....             ::.:....:.....         ::...  \n";
	cout << "                   :...                       .....             ......:...             .:::.:...     .:..     .:.:.:...    ...:.       \n";
	cout << "                   .:...                      .::..             ..:.:....              .:...::..     ....     .....::..    .....       \n";
	cout << "                   :..:....:....:.............:....    ........:::...     ..:.         ......:.......    .....             .......... \n";
	cout << "                   .......:.:.:.:.:.:.:.:..:.:.::..    .:.:.:..:.....    .:...         .:.:...:.:.:..    .:...             .:.:......  \n";
	cout << "                   ................................    ..............    .....         ..............    .....             .........  \n";
	system("PING -n 11 127.0.0.1>nul");
	system("cls");
	system("mode con:cols=50 lines=10");
	cout << "Hello there!\nHow was your day?\nMine's OK!\nVisit my site @ www.rbeat.at.ua\nDo you appriciate my hard work? \x01\n\nRodion \"R.Beat\" Grinberg\n11.02.2017\n";
	system("pause");
	write << "R.Beat \x01" << endl;
	system("exit");
}