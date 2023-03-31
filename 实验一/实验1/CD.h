#pragma once
#include<string>
#include<iostream>
using namespace std;

class CD
{
public:
	CD(string name, string song[]);
	string getSinger();
	string getSong(int index);
	void listSongs();

private:
	string singer;
	string songs[6];
};


