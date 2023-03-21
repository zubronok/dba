#include <vector>
#include <string>
#include "split.h"

using std::string;
using std::vector;

vector<string> split(string text, char delimeter)
{
	size_t pointer = 0;
	vector<string> vct;
	const size_t size = text.size();
	for (size_t i = 0; i < size - 1; i++)
	{
		if (text[i] == delimeter && i != 0)
		{
			string _text = "";
			for (size_t j = pointer; j < i; j++)
			{
				_text += text[j];
			}
			pointer = i;
			vct.push_back(_text);
		}
	}
	string _text;
	_text = "";
	for (size_t j = static_cast<size_t>(pointer) + 1; j < size; j++)
	{
		_text += text[j];
	}
	vct.push_back(_text);
	return vct;
}
