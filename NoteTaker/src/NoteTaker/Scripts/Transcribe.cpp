#define PY_SSIZE_T_CLEAN
#include "Transcribe.h"
//#include <Python.h>                       
#include <Windows.h> 
#include <string>
#include <fstream>
#include <iostream>
namespace NoteTaker {
	Transcribe::Transcribe(std::string link)
	{

        ////All this code to download a YouTube Video and get the title back to our class 
        //Py_Initialize();
        //PyRun_SimpleString("from pytube import YouTube\n");

        //// Redirect the Python output to a Python object
        //PyObject* sysOut = PySys_GetObject("stdout");
        //PyObject* sysErr = PySys_GetObject("stderr");

        //// Run the Python code
        //PyRun_SimpleString("a = 42\nprint(a)");

        //// Extract the output as a C string
        //PyObject* outStr = PyObject_Repr(sysOut);
        //PyObject* errStr = PyObject_Repr(sysErr);
        //const char* outCStr = _PyUnicode_AsString(outStr);
        //const char* errCStr = _PyUnicode_AsString(errStr);

        //// Print the output
        //title = outCStr;
        //std::cerr << errCStr << std::endl;

        //// Clean up and exit
        //Py_Finalize();



 //       
 //       vidPath = "yt/audio.wav";
 //       
 //       FILE* fh;
 //       short* buf;
 //       size_t len, nsamples;

 //       /* Look for a single audio file as input parameter. */
 //       
 //       if ((fh = fopen(vidPath.c_str(), "rb")) == NULL)
 //           E_FATAL_SYSTEM("Failed to open %s", vidPath);

 //       /* Get the size of the input. */
 //       if (fseek(fh, 0, SEEK_END) < 0)
 //           E_FATAL_SYSTEM("Unable to find end of input file %s", vidPath);
 //       len = ftell(fh);
 //       rewind(fh);

 //       /* Initialize configuration from input file. */
 //       config = ps_config_init(NULL);
 //       ps_default_search_args(config);
 //       if (ps_config_soundfile(config, fh, vidPath.c_str()) < 0)
 //           E_FATAL("Unsupported input file %s\n", vidPath);
 //       if ((decoder = ps_init(config)) == NULL)
 //           E_FATAL("PocketSphinx decoder init failed\n");


 //       /* Allocate data (skipping header) */
 //       len -= ftell(fh);
 //       if ((buf = (short*)malloc(len)) == NULL)
 //           E_FATAL_SYSTEM("Unable to allocate %d bytes", len);
 //       /* Read input */
 //       nsamples = fread(buf, sizeof(buf[0]), len / sizeof(buf[0]), fh); 
 //       if (nsamples != len / sizeof(buf[0]))
 //           E_FATAL_SYSTEM("Unable to read %d samples", len / sizeof(buf[0]));
 //       /* Recognize it! */
 //       if (ps_start_utt(decoder) < 0)
 //           E_FATAL("Failed to start processing\n");
 //       if (ps_process_raw(decoder, buf, nsamples, FALSE, TRUE) < 0)
 //           E_FATAL("ps_process_raw() failed\n");
 //       if (ps_end_utt(decoder) < 0)
 //           E_FATAL("Failed to end processing\n");

 //       /* Print the result */
 //       if (ps_get_hyp(decoder, NULL) != NULL) {
 //           std::ofstream file("transcripts/" + title);
 //           if (file.is_open())
 //           {
 //               file << ps_get_hyp(decoder, NULL); 
 //               file.close();
 //           }
 //       }

 //       /* Clean up */
 //       if (fclose(fh) < 0)
 //           E_FATAL_SYSTEM("Failed to close audio.wav");
 //       free(buf);
 //       ps_free(decoder);
 //       ps_config_free(config);
 //           
	}
	
}
