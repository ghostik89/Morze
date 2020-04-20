#pragma once
#include <map>
#include <string>
#include <vector>
using namespace std;

const map<string, char> Dictionary = {
	{".-", 'A'}, {"-�", '�'}, {".--", '�'},
	{"--.",'�'}, {"-..",'�'}, {".",'�'},
	{"�-",'�'}, {"--..",'�'}, {"..",'�'},
	{".---",'�'}, {"-.-",'�'}, {".-..",'�'},
	{"--",'�'}, {"-.",'�'}, {"---",'�'},
	{".--.",'�'}, {".-.",'�'}, {"�",'�'},
	{"-",'�'}, {"..-",'�'}, {"..-.",'�'},
	{"�.",'�'}, {"-.-.",'�'}, {"---.",'�'},
	{"----",'�'}, {"--.-",'�'}, {".--.-.",'�'},
	{"-.--",'�'}, {"-..-",'�'}, {"�-�" , '�'},
	{"..--" , '�'}, {".-.-" , '�'}, {"-----" , '0'},
	{".----" , '1'}, {"..---" , '2'}, {"�--" , '3'},
	{"�.-" , '4'}, {"�.." , '5'}, {"-�." , '6'},
	{"--�" , '7'}, {"---.." , '8'}, {"----." , '9'},
};

const int MAX_SIZE = 256;

/*
	param[in]: DecodeString - �������� ������, ������������� � ������ �����
	param[in|out]: DecodedVariants - ������ �������������� ���������
	param[in|out]: StartIndex - ������, ����� � ������� �������������� ���������
*/
void DecodeMorze(const string& DecodeString, vector<string>& DecodedVariants, int StartIndex);