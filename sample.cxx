#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	cout << "Insert some randome input: ";
	int input;
	cin >> input;
	cout << "You have entered: " << input << endl;
	system("omxplayer /home/pi/Desktop/Program/sound.wav");
	return 0;
}
