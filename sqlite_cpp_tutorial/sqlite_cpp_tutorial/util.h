#pragma once

#include <iostream>
#include <stdio.h>
#include <sqlite3.h>

namespace util {

	// Log to console window --------------------------------------------------------------------------

	// Add space with a partition in console
	static void LogSpace() {
		std::cout << "\n-------------------------------------------\n";
	}

	// Log in the same line
	template<typename T>
	static void LogInline(const T& msg) {
		std::cout << "LOG: " << msg;
	}

	// Log and move to the next line
	template<typename T>
	static void Log(const T& msg) {
		std::cout << msg << '\n';
	}
}