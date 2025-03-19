#include <cstdio>
#include <string>

#define CHUCHUT 1

void vstoronu(std::string &str, int v) {
	for (char &c : str) c <<= v;
}

int main() {
    std::string str1 = "Отлично";
    std::string str2 = "Отлично";
    std::string str3 = "Отлично";
	
	vstoronu(str1, CHUCHUT);
	vstoronu(str2, CHUCHUT);
	vstoronu(str3, CHUCHUT);

	std::printf("\n%s\n%s\n%s\n", str1.c_str(), str2.c_str(), str3.c_str());
    
    return 0;
}
