#pragma once

#include <stdio.h>
#include <fstream>
#include <iostream>  

#include "helpers/hash.hh" //Includes line_splitter
#include "helpers/probing_hash_utils.hh"
#include "helpers/huffmanish.hh"
#include <sys/stat.h> //mkdir

#include "util/file_piece.hh"
#include "util/file.hh"
#include "vocabid.hh"

void createProbingPT(const char * phrasetable_path, const char * target_path);

class BinaryFileWriter {
    std::vector<unsigned char> binfile;
    std::vector<unsigned char>::iterator it;
    //Output binary
    std::ofstream os;

public:
    unsigned int dist_from_start; //Distance from the start of the vector.
    uint64_t extra_counter; //After we reset the counter, we still want to keep track of the correct offset, so

    BinaryFileWriter (std::string);
    ~BinaryFileWriter ();
    void write (std::vector<unsigned char> * bytes);
    void flush (); //Flush to disk

};