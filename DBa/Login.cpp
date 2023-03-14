#include "Login.h"
#include <vector>
using std::vector;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	DBa::Login form;
	Application::Run(% form);
}

std::vector<string> split(string text, char delimeter)
{
	int pointer = 0;
	std::vector<string> vct;
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
