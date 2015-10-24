#include <string>
#ifndef ENCRYPT_HEADER
#define ENCRYPT_HEADER

class encrypt
{
public:
	void updatePlainText(std::string str);
	std::string getCipherText();
	encrypt(){cipherText = ""; plainText = "";};
	~encrypt(){};
private:
	std::string cipherText;
	std::string plainText;
	void encryptText(std::string str);
};

void encrypt::updatePlainText(std::string str)
{
	plainText = str;
	cipherText = "";
	encryptText(plainText);
}

void encrypt::encryptText(std::string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			cipherText.push_back((str[i] -'A' + 1) % 26 + 'A');
		}
		else if('a' <= str[i] && str[i] <= 'z')
		{
			cipherText.push_back((str[i] -'a' + 1) % 26 + 'a');
		}
		else
		{
			cipherText.push_back(str[i]);
		}
	}
}
std::string encrypt::getCipherText()
{
	return cipherText;
}

#endif
