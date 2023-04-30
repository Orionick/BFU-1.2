#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::ostream;
using std::istream;

class Fibo
{
private:
	string m_sentence;
	string m_encrypted_sentence;
	string m_decrypted_sentence;
	vector<int> m_key;
	vector<string> m_splited;

	const int FIBO_LINE[30] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
								144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946,
								17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269 };

	void sentence_split(const string& sentence);
	int fibo_index(int& number);
public:
	Fibo() = default;
	Fibo(const string& sentence);

	string Encrypt(vector<int>& key);
	string Decrypt(vector<int>& key);
};