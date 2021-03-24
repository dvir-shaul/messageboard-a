#include "doctest.h"
using namespace doctest;
#include "Board.hpp"
#include <string>
using namespace std;
using namespace ariel;


//TEST_CASE("should all run good if implemented ok"){}
    //Board board;
    //CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("hello") !=0);




 TEST_CASE("good input cases"){
    Board board;
    //CHECK_THROWS(board.post(9, -1, Direction::Horizontal,""));
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal,"555"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("555__") == 0);
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal, "666"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("666__") == 0);
    CHECK_NOTHROW(board.read(0, 0, Direction::Horizontal, 5));
    CHECK_NOTHROW(board.read(0, 0, Direction::Vertical,5));
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal,"555"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("555__") == 0);
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal, "666"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("666__") == 0);
    CHECK_NOTHROW(board.read(0, 0, Direction::Horizontal, 5));
    CHECK_NOTHROW(board.read(0, 0, Direction::Vertical,5));
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal,"555"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("555__") == 0);
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal, "666"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("666__") == 0);
    CHECK_NOTHROW(board.read(0, 0, Direction::Horizontal, 5));
    CHECK_NOTHROW(board.read(0, 0, Direction::Vertical,5));
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal,"555"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("555__") == 0);
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal, "666"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("666__") == 0);
    CHECK_NOTHROW(board.read(0, 0, Direction::Horizontal, 5));
    CHECK_NOTHROW(board.read(0, 0, Direction::Vertical,5));
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal,"555"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("555__") == 0);
    CHECK_NOTHROW(board.post(0, 0, Direction::Horizontal, "666"));
    CHECK(board.read(0, 0, Direction::Horizontal, 5).compare("666__") == 0);
    CHECK_NOTHROW(board.read(0, 0, Direction::Horizontal, 5));
    CHECK_NOTHROW(board.read(0, 0, Direction::Vertical,5));
    //CHECK_THROW(board.read(7,78, 3, -5));

    //CHECK(board.read(20,30,Direction::Horizontal,4).compare("heyy") == 0 );
    //CHECK(board.read(20,30,Direction::Vertical,  4).compare("heyy") == 0 );
    /**CHECK_FALSE(board.read(0,0,Direction::Horizontal,5).compare("hello") ==0);
    CHECK_FALSE(board.read(0,6,Direction::Horizontal,5).compare("World") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Horizontal,4).compare("heyy") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Vertical,  4).compare("heyy") ==0);
    CHECK_FALSE(board.read(0,0,Direction::Horizontal,5).compare("hello") ==0);
    CHECK_FALSE(board.read(0,6,Direction::Horizontal,5).compare("World") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Horizontal,4).compare("heyy") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Vertical,  4).compare("heyy") ==0);
    CHECK_FALSE(board.read(0,0,Direction::Horizontal,5).compare("hello") ==0);
    CHECK_FALSE(board.read(0,6,Direction::Horizontal,5).compare("World") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Horizontal,4).compare("heyy") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Vertical,  4).compare("heyy") ==0);
    CHECK_FALSE(board.read(0,0,Direction::Horizontal,5).compare("hello") ==0);
    CHECK_FALSE(board.read(0,6,Direction::Horizontal,5).compare("World") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Horizontal,4).compare("heyy") ==0);
    CHECK_FALSE(board.read(20,30,Direction::Vertical,  4).compare("heyy") ==0);
    CHECK_FALSE(board.read(0,0,Direction::Horizontal,5).compare("hello") ==0);
    CHECK_FALSE(board.read(0,6,Direction::Horizontal,5).compare("World") ==0);
*/
}



