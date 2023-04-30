#pragma once

#include "Fibo.h"

Fibo::Fibo(const string& sentence)
{
	this->m_sentence = sentence;
}

void Fibo::sentence_split(const string& sentence)
{
	string temp_word;

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == ' ')
		{
			this->m_splited.push_back(temp_word);
			temp_word.clear();
			continue;
		}
		if (i == sentence.size() - 1)
		{
			temp_word += sentence[i];
			this->m_splited.push_back(temp_word);
		}
		temp_word += sentence[i];
	}
}

int Fibo::fibo_index(int& number)
{
	for (int i = 0; i < 30; i++)
		if (FIBO_LINE[i] == number)
			return i;
}

string Fibo::Encrypt(vector<int>& key)
{
	this->sentence_split(m_sentence);

	for (int value : key)
		this->m_encrypted_sentence += this->m_splited[fibo_index(value)] + ' ';

	return this->m_encrypted_sentence;
}

string  Fibo::Decrypt(vector<int>& key)
{
	this->m_splited.clear();
	this->sentence_split(m_encrypted_sentence);

	for (int value : key)
		this->m_decrypted_sentence += this->m_splited[fibo_index(value)] + ' ';

	return this->m_decrypted_sentence;
}