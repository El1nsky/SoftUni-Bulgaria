#include <iostream>;
#include <set>;
#include <string>
#include <sstream>
#include <algorithm>

class WordBox
{
	private:
		std::set<std::string> words;

	public:
		void readWords(std::istream& input)
		{
			std::string buffer;
			std::getline(input, buffer);

			for (char & c : buffer)
			{
				if (ispunct(c))
				{
					c = ' ';
				}
			}

			std::istringstream istr(buffer);
			std::string tmp;

			while (istr >> tmp)
			{
				words.insert(tmp);
			}

		}

		void processChar(char c, std::ostream& ostr)
		{
			c = ::tolower(c);
			bool bFound = false;

			for (const std::string & curr : words)
			{
				std::string transformed = curr;

				std::transform(transformed.begin(), transformed.end(), transformed.begin(), ::tolower);
				if (transformed.find(c) != std::string::npos)
				{
					bFound = true;
					ostr << curr << " ";
				}
			}

			if (!bFound)
			{
				ostr << "---";
			}


			std::cout << '\n';
		}

};

int main()
{
	WordBox wb;

	wb.readWords(std::cin);

	while (true)
	{
		char c;
		std::cin >> c;

		if (c == '.') break;

		wb.processChar(c, std::cout);
	}

	return 0;
}