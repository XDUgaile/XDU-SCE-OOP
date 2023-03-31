#include "CD.h"

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
		cout << "Error!" << endl;
	return songs[index];
}

void CD::listSongs()
{
	cout << "Singer:" << singer << endl;
	for (int i = 0; i < 6; i++)
		cout << " " << i + 1 << ". " << songs[i] << endl;
}