#include<string>
#include<iostream>
#include"CD.h"
#include"CDplayer.h"


CD::CD(string name, string songs[])
{
	singer = name;
	for (int i = 0; i < 6; i++)
	{
		CD::songs[i] = songs[i];
	}
}

string CD::getSinger()
{
	return singer;
}

string CD::getSong(int index)
{
	if (index >= 6 || index < 0)
		cout << "Error" << endl;
	return songs[index];
}

void CD::listSongs()
{
	cout << "singer: " << singer << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "  " << i + 1 << songs[i] << endl;
	}
}




CDPlayer::CDPlayer()
{
	cd = NULL;
	cdIn = false;
}

void CDPlayer::insertCD(CD* cd)
{
	if (cdIn)
		cout << "CD player has already loaded a CD" << endl;
	else
	{
		CDPlayer::cd = cd;
		cdIn = true;
		cout << "A cd has been inserted successfully" << endl;
	}
}

CD* CDPlayer::eject()
{
	CD* temp = cd;
	if (cdIn)
	{
		cout << "CD of the Singer" << cd->getSinger() << " is ejected" << endl;
		cdIn = false;
		cd = NULL;
		return temp;
	}
	else
	{
		cout << "Error! There is no CD in the player" << endl;
		return NULL;
	}
}

void CDPlayer::showMenu()
{
	cout << endl;
	cout << "*****************" << endl;
	cout << "*1.play CD*******" << endl;
	cout << "*2.Inser CD******" << endl;
	cout << "*3.Eject CD******" << endl;
	cout << "*****************" << endl;
}

void CDPlayer::play()
{
	if (cdIn)
	{
		cout << "Now the CD of the Singer " << cd->getSinger() << " is playing!" << endl;
		cd->listSongs();
	}
	else
		cout << "There is no CD in the player.Please insert a CD before playing it!" << endl;


}
int main()
{
	string name, songs[6];
	cout << "Now play the CD" << endl;
	cout << "Please input the Singer's name:" << endl;
	cin >> name;
	for (int i = 0; i < 6; i++)
	{
		cout << "song" << i + 1 << endl;
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