#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> v = {
		"#include <iostream>",
		"#include <string>",
		"#include <vector>",
		"",
		"int main(){",
		"    std::vector<std::string> v = {",
		"    };",
		"",
		"    for (int i = 0; i < v.size(); i++) {",
		"        for (int j = 0; i == 6 && j < v.size(); j++) {",
		"           std::cout << \"        \\\"\"; ",
		"           for (int k = 0; k < v[j].size(); k++)",
		"               std::cout <<",
		"               ((v[j][k] == \'\\\'\' || v[j][k] == \'\\\\\' || v[j][k]==\'\\\"\')",
		"                   ? \"\\\\\":\"\") << v[j][k];",
		"           std::cout << \"\\\",\" << std::endl;",
		"        }",
		"        std::cout << v[i] << std::endl;",
		"    }",
		"    return 0;",
		"}",
	};

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; i == 6 && j < v.size(); j++) {
			std::cout << "        \"";
			for (int k = 0; k < v[j].size(); k++)
				std::cout <<
				((v[j][k] == '\'' || v[j][k] == '\\' || v[j][k] == '\"')
					? "\\" : "") << v[j][k];
			std::cout << "\"," << std::endl;
		}
		std::cout << v[i] << std::endl;
	}
	return 0;
}