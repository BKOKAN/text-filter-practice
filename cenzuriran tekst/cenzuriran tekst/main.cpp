#include <vector>
#include <string.h>
#include <algorithm>
#include <string>
#include <iostream>

std::string text_filter(std::string entery, std::string bad_words)
{
	return "blalba";
}

int main()
{	
	int pos = 0;

	std::string example = "Get out of my way stupid. Why u so stupid."; // prijmer	
	
	std::string result = text_filter(example, "stupid"); // filtriraj rijec "stupid"
	std::cout << result << std::endl;  // ispisi primjer
	int last = example.find_last_of("stupid");
	std::string string_to_find = "stupid"; // trazimo "stupid"
	auto from = example.find(string_to_find); //pronadi poziciju "stupid"
	auto how_much = string_to_find.length(); // duljina te rijeci

	for (int pos = 0; pos < last; pos++)
	{
		auto from = example.find(string_to_find); //pronadi poziciju "stupid"
		std::cout << from << std::endl; // ispisi gdje je pozicija rijeci
		std::cout << example.substr(from) << std::endl; // ispisi od pozicije te rijeci
		std::cout << example << std::endl; // ipsisi prijmer
		auto replace = "******"; // zamjena za rijec koju ponalazimo
		example.replace(from, how_much, replace); // od pozicije gdje smo pronasli rijec, duljina te rijeci, zamjeni tu rijec
		std::cout << example << std::endl; // ispisi primjer s filtriranom rijeci
	}


}