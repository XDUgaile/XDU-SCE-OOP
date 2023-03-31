#include "CDPlayer.h"

CDPlayer::CDPlayer()
{
	cd = NULL;
	cdIn = false;
}

void CDPlayer::insertCD(CD* cd)
{
	if (cdIn)
		cout << "CD player has already loaded a CD, and cannot get more" << endl;
	else
	{
		CDPlayer::cd = cd;
		cdIn = true;
		cout << "A cd has been inserted successfully into the CD player of Singer" << cd->getSinger() << "." << endl;
	}
}

CD* CDPlayer::eject()
{
	CD* temp = cd;
	if (cdIn)
	{
		cout << "CD of the Singer " << cd->getSinger() << " is ejected." << endl;
		cdIn = false;
		cd = NULL;
		return temp;
	}
	else
	{
		cout << "Error! There is no CD in the player!" << endl;
		return NULL;
	}
}

void CDPlayer::showMenu()
{
	cout << endl;
	cout << "******************" << endl;
	cout << "* 1.play CD*******" << endl;
	cout << "* 2.Inser CD******" << endl;
	cout << "* 3.Eject CD******" << endl;
	cout << "******************" << endl;
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