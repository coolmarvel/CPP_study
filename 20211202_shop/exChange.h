#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum COIN
{
	COIN_BIT = 1,	//비트코인 계열
	COIN_ETH,	//이더리움 계열
	COIN_RIP,	//리플 계열
	COIN_ALT,	//알트코인(alternative coin)
	COIN_END
};

class tagCoinInfo
{
public:
	COIN coinKind;
	string name;
	string description;
	int price;
	float change;
};

class exChange
{
private:
	//코인정보가 담긴 클래스를 담을 벡터 컨테이너
	vector<tagCoinInfo>				_vCoin;
	vector<tagCoinInfo>::iterator	_viCoin;

public:
	void coinSetup();
	void coinOutput(int coinNum);


	vector<tagCoinInfo> getCoinVector() { return _vCoin; }

	exChange();
	~exChange();
};

