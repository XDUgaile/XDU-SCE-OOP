#pragma once
#include"CD.h"

class CDPlayer
{
public:
	CDPlayer();
	
	void showMenu();
	void insertCD(CD* cd);
	CD* eject();
	void play();

private:
	CD* cd;
	bool cdIn;
};



