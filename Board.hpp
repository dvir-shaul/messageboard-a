#pragma once
#include "Direction.hpp"
#include <vector>
#include <string>


namespace ariel {

    class Board{

        private:
            std::vector<std::vector<char>> boardMsg;     
               
            public: 
            Board();
            ~Board();
            void show();
            void post( uint horizontal, uint vertical,ariel::Direction loc, std::string message);
            std::string read( uint horizontal, uint vertical,ariel::Direction loc, int len);

        
    };

};
