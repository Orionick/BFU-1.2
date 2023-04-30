#include "Fibo.h"

int main()
{
	string sentence;
	vector<int> key{ 5, 3, 2, 1 };

	std::getline(std::cin, sentence);

	Fibo message(sentence);

	string encrypted = message.Encrypt(key);
	std::cout << encrypted << std::endl;

	string decrypted = message.Decrypt(key);
	std::cout << decrypted << std::endl;
}
