#include<iostream>
#include"CD.h"
#include"CDPlayer.h"

int main()
{
	string name, songs[6];
	
	cout << "Now play the CD" << endl;
	cout << "Please input the Singer's name:" << endl;
	cin >> name;
	
	for (int i = 0; i < 6; i++)
	{
		cout << "song" << (i + 1) << endl;
		cin >> songs[i];
	}

	CD cd(name, songs);
	cd.listSongs();

	CDPlayer player;

	player.showMenu();
	player.play();

	player.insertCD(&cd);
	player.play();

	player.eject();
	return 0;
}