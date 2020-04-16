#pragma once

#include <string>

namespace bkc {
	std::string getVersionMajor(){
		return (std::to_string());
	}
	std::string getVersionMinor(){
		return (std::to_string());
	}
	std::string getVersionPatch(){
		return (std::to_string());
	}
	std::string getVersion(){
		std::string tmp = std::string("\tbkc version : ") + getVersionMajor() + "." + getVersionMinor() + " (build:" + getVersionPatch() + ")";
		return (tmp);
	}

}
