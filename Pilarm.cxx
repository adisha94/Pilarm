#include <iostream>
#include <stdlib.h>

using namespace std;


class Pilarm
{
private:
	int digitalSignal;
public:
	Pilarm(); // DEFAULT CONSTRUCTOR
	void SignalOn();
	void SignalOff();
}pi;



//definition of default constructor
Pilarm::Pilarm()
{
	digitalSignal = 0;
}

		

/*

	Main function
*/

int main()
{
	int option;
		cout << "Enter an option from the menu below\n\n";
		cout << "\t1. Audio Booster On \n\n " << "\t2. Audio Booster Off and exit program\n\n";
		cin >> option;
		cout << "You have chosen option " << option << endl;
		if (option == 1)
		{
			pi.SignalOn(); // start the signal pattern
		}
		else if (option == 2)
		{
			pi.SignalOff();
			cout << "Now exiting Pilarm program";
			exit(1);
		}
	return 0;
	
}

/*
 * Function Defnitions
 */

void Pilarm::SignalOn()
{
	int option2;
	cout << "Welcome to the submenu:\n\t Which sound clip should we play:\n" << "1. Sound clip #1\t" << "2. Sound Clip #2\t" << "3. Sound Clip #3\n";
	cin >> option2;
	if (option2 == 1)
	{
		cout << "Executing sound clip " << option2 << "...." << endl;
		system("omxplayer -o local /home/pi/Desktop/sound.wav");
		cout << "Sound signal playing complete" << endl;
	}
	else if(option2 == 2)
	{
		cout << "Executing sound clip " << option2 << "...." << endl;
		system("omxplayer -o local /home/pi/Desktop/ChkairՉaկայիր-VladimirArzumanyan.wav");
		cout << "Sound signal playing complete" << endl;
	}
	else if(option2 == 3)
	{
		cout << "Executing sound clip " << option2 << "...." << endl;
		system("omxplayer -o local /home/pi/Desktop/RuthLorenzo-DancingInTheRain2014EurovisionSongContest-YouTube.wav");
		cout << "Sound signal playing complete" << endl;
	}


}


void Pilarm::SignalOff()
{
	system("killall omxplayer.bin");
}
