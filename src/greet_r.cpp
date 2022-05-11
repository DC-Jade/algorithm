#include <stdio.h>

#include <string>
#include <iostream>

using std::string;

void GreetTwo (const string &name) {
	printf("how are you, %s ?\n", name.c_str());
}

void Bye() {
	printf("okay, bye!\n");
}

void Greet(const string &name) {
	printf("hello %s\n", name.c_str());
	GreetTwo(name);
	printf("getting ready to say bye\n");
	Bye();
}

void TestGreet() {
	string s;
	while (std::getline(std::cin, s)) Greet(s);
	printf("end of TestGreet\n");
}

int main(int argc, char *argv[]) {
	TestGreet();
}
