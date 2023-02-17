#pragma once
#include <string>
//#include "pocketsphinx.h"

namespace NoteTaker {
	class Transcribe
	{
	public:
		Transcribe(std::string link);

	private:
		std::string transcript;
		std::string vidPath;
		std::string title; 
		//ps_decoder_t* decoder;
		//ps_config_t* config;
	};

}